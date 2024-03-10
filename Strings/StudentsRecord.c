#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


typedef struct 
{
    /* data */
    int rollNumber;
    int studentSemester;
    char DOB[30];
    char studentBrach[50];
    char studentName[50];
}StudentsRecord;

//global variables
StudentsRecord students[10];
#define maxRecord 10

//functionPrototypes
void displayStudentInfo(StudentsRecord *student,int size);
int addNewStudent(StudentsRecord  *students,int size);
int deleteStudent(StudentsRecord *students,int size);
int checkRollNumber(StudentsRecord *students,int size,int rollNumber);


int main (void)
{
    int option;
    int flag;
    do
    {
        printf("Student Menu: \n");
        printf("Display all records -->1\n");
        printf("Add new record      -->2\n");
        printf("Delete a record     -->3\n");
        printf("Exit Application    -->0\n");
        printf("Enter your choice : ");
        scanf("%d",&option);
        printf("\n");
        switch (option)
        {
        case 1:
            displayStudentInfo(students,maxRecord);
            break;
        case 2:
            printf("Add a new record \n");
            flag=addNewStudent(students,maxRecord);
            !flag ? printf("Error in adding the record.Try again.\n") :printf("Successfully added.\n");
            break;
        case 3:
            printf("Delete a record \n");
            flag=deleteStudent(students,maxRecord);
            !flag ? printf("No Record deleted.\n"):printf("Record deleted Successfully.\n");
            break;
        case 0:
            printf("Exiting the application...\n");
            break;
        default:
            printf("Error entering the code \n");
            break;
        }
    } while (option!=0);
    
}

void displayStudentInfo(StudentsRecord *student,int size)
{

    int record=0;
    for(uint8_t i=0;i<size;i++)
    {
        if(student[i].rollNumber)
        {
            record = 1;
            printf("RollNumber: %d\n",student[i].rollNumber);
            printf("Name: %s\n",student[i].studentName);
            printf("DOB: %s\n",student[i].DOB);
            printf("Semester: %d\n",student[i].studentSemester);
            printf("Branch: %s\n",student[i].studentBrach);
            printf("\n");   
        }
    }

    if(!record)
    {
        printf("No records found\n");
    }
}

int checkRollNumber(StudentsRecord *students,int size,int rollNumber)
{
    int exist=0;

    for(int i=0;i<size;i++)
    {
        if(students[i].rollNumber==rollNumber)
        {
            exist=1;
            break;
        }
    }

    return exist;
}
int addNewStudent(StudentsRecord  *students,int size)
{
    int  isAdded = 0;
    int  exist = 0;
    int RollNumber;
    int i;

    for(i=0;i<size;i++)
    {
        if(! students[i].rollNumber)
        {
            printf("Enter the student's Roll Number: ");
            scanf("%d",&RollNumber);
            exist = checkRollNumber(students,size,RollNumber);
            if(!exist)
            {
                isAdded=1;
                students[i].rollNumber = RollNumber;
                printf("Enter The Student DOB(dd/mm/yyyy): ");
                scanf("%s",students[i].DOB);
                printf("Enter The Student Semester: ");
                scanf("%d", &students[i].studentSemester);
                printf( "Enter The Student Name : " );
                getchar();
                scanf("%50[^\n]s",students[i].studentName);
                printf("Enter The Student Brach of Studing: ");
                getchar();
                scanf("%50[^\n]s",students[i].studentBrach);
            }
            else{
                printf("\nThe roll number already exists. Please enter a different one.\n");
            }
            break;
        }
    }

    if(i==size)
    {
        printf("No memory available \n");
    }

    return isAdded;
}

int deleteStudent(StudentsRecord *students,int size)
{
    int RollNumber;
    int isDeleted=0;

    printf("Enter the roll number to be deleted: ");
    scanf("%d",&RollNumber);

    for (int i = 0; i < size; i++)
    {
        if(RollNumber== students[i].rollNumber)
        {
            isDeleted=1;
            memset(&students[i],0,sizeof(StudentsRecord)); //clearing the data in that particular index
            break;
        }
    }

    return isDeleted;
}