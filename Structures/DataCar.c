#include <stdio.h>
#include <stdint.h>


struct CarModel
{
    /* data */
    unsigned int carNumber;
    uint32_t carPrice;
    uint16_t carMaxSpeed;
    float carWeight;
}typedef  CarModel;

int main(void)
{
    struct CarModel DataCar1 ={2021,15000,220,1330};
    struct CarModel DataCar2 ={2022,8999,170,1400};
   
   printf("Data cars: \n");
   printf("Car number 1: \n");
   printf("Year %d\n",DataCar1.carNumber);
   printf( "Price %u\n" , DataCar1.carPrice );
   printf("Max speed %hu\n" , DataCar1.carMaxSpeed);
   printf("Weight %.2f\n" , DataCar1.carWeight);
   printf("\nCar number 2:\n");
   printf("Year %d\n",DataCar2.carNumber);
   printf( "Price %u\n" , DataCar2.carPrice );
   printf("Max speed %hu\n" , DataCar2.carMaxSpeed);
   printf("Weight %.2f\n" , DataCar2.carWeight);

   return 0;
    
}