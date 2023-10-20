#include<stdio.h>
int main()
{
   float Rice, Sugar;
   scanf("%f %f", &Rice, &Sugar);

   printf("*** List Of Items ***\n");
   printf("Item        Price\n");
   printf("Rice   Rs %.2f\n", Rice);
   printf("Sugar  Rs %.2f", Sugar);

   return 0;
}
