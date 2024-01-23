#include <stdio.h>
#include <stdint.h>
#include <math.h>
#define PI 3.14
/*
    Calculation of Areas:
    - Triangle: (base * height) / 2
    - Circle: pi * radius^2
    - Trapezoid: ((a + b) / 2) * h
    - Square: side^2
    - Rectangule: length * width
*/

int main (void)
{
    double base=0;
    double height=0;
    double radius=0;
    double a,b,h;
    double side=0;
    double length=0;
    double width=0;
    char code;
    double area=0;


    printf("Area calculation program\n");
    printf("Circle ---> c \n");
    printf("Triangle ---> t \n");
    printf("Trapezoid ---> z \n");
    printf("Square ---> s \n");
    printf("Rectangle ---> r \n");
    printf("Enter the code here: ");
    code = getchar();

    switch (code)
    {
    case 'c':
    {   
        printf("Area of Circle \n");
        printf("Enter radius: ");
        if(scanf("%lf",&radius) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        if(radius<0)
        {
            printf("Input Error it can't be a negative value \n");
            return 0;
        }
        area = PI * pow(radius,2);
        printf("Area of circle is: %lf \n",area);
    }break;
    case 't':
    {   
        printf("Area of Triangle \n");
        printf("Enter base: ");
        if(scanf("%lf",&base) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        printf("Enter height: ");
        if(scanf("%lf",&height) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        if ((base<0)||(height<0))
        {
            printf("Input Error it can't be a negative value \n");
            return 0;
        }
        area = (base*height)/2;
        printf("Area of triangle is: %lf \n",area);
    }break;
    case 'z':
    {   
        printf("Area of Trapezoid \n");
        printf("Enter side a: ");
        if(scanf("%lf",&a) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        printf("Enter b: ");
        if(scanf("%lf",&b) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        printf("Enter height: ");
        if(scanf("%lf",&h) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        if ((a<0)||(h<0)||(b<0))
        {
            printf("Input Error it can't be a negative value \n");
            return 0;
        }
        area = ((a+b)/2)*h;
        printf("Area of triangle is: %lf \n",area);
    }break;
    case 's':
    {   
        printf("Area of Square \n");
        printf("Enter side: ");
        if(scanf("%lf",&side) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        if (side<0)
        {
            printf("Input Error it can't be a negative value \n");
            return 0;
        }
        area = pow(side,2);
         printf("Area of square is: %lf \n",area);
    }break;
    case 'r':
    {   
        printf("Area of Rectangle \n");
        printf("Enter length: ");
        if(scanf("%lf",&length) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        printf("Enter width: ");
        if(scanf("%lf",&width) == 0)
        {
            printf("Invalid character.... Exiting");
            return 0;
        }
        if ((length<0)||(width<0))
        {
            printf("Input Error it can't be a negative value \n");
            return 0;
        }
        area = length*width;
        printf("Area of rectangle is: %lf \n",area);
    }break;
    default:
        printf("Code not recognize!!!");
        break;
    }

    return 0;
}