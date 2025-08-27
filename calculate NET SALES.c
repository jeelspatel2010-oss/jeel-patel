#include<stdio.h>
   int main()
   {

   float netsales,grosssales,discount;

   printf("Enter the gross sales:");
   scanf("%f",&grosssales);

   discount=0.1*grosssales;
   netsales=grosssales-discount;

   printf("\nnetsales is %.2f",netsales);
   return 0;
   }
