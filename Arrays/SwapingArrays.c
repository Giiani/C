#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void array_display(uint8_t const *pArray,uint32_t nItems);
void swapping_arrays(uint8_t *pArray1, uint8_t *pArray2,uint32_t  nItems);

int main (void)
{
    uint8_t size1;

    printf("Array swapping program \n");
    printf("Enter the number of elements for the arrays: ");
    scanf( "%d", &size1 ); 
    uint8_t arr1[size1];
    uint8_t arr2[size1];

    printf("\n Enter values for Array-1 : \n");
    for (uint32_t i=0 ; i<size1 ; i++) {
        printf("Enter element %ld : ",i+1);
        scanf("%d",&arr1[i]);                   
    }    

    printf("\n Enter values for Array-2 : \n");
    for (uint32_t i=0 ; i<size1 ; i++) {
        printf("Enter element %ld : ",i+1);
        scanf("%d",&arr2[i]);                   
    }  

    swapping_arrays(arr1,arr2,size1);

    printf("\n The elements in Array-1 after swapping are:\n");
    array_display(arr1,size1);
    printf("\n The elements in Array-2 after swapping are:\n");
    array_display(arr2,size1);  

   return 0;
}

void array_display(uint8_t const *pArray,uint32_t nItems)
{
    for(int j=0;j<nItems;j++) {
        printf("Byte %d = %d \n",j+1,pArray[j]);   // Print the character, not its ASCII value!
    }
}

void swapping_arrays(uint8_t *pArray1, uint8_t *pArray2,uint32_t  nItems)
{
    int32_t i;
    /* Swap all elements of arrays */
    for (i = 0; i < nItems; i++)
    {
       /* use a temporary variable for swap as it might be slower on some architectures */
       uint8_t temp = pArray1[i];
       pArray1[i] = pArray2[i];
       pArray2[i] = temp;
    }
}
