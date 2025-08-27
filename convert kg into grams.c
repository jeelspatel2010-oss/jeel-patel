#include<stdio.h>
 int main()
{
float kilograms,grams;

printf("Enter weight in kilograms:-");

scanf("%f",&kilograms);

grams=kilograms*1000;

printf("weight in grams is %.3f grams\n",grams);

return 0;
}
