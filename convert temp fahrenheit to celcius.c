#include<stdio.h>

int main()
{

float C,F;

printf("Enter temperature in fahrenheit\n");
scanf("%f",&F);

C=(F-32)/1.8;

printf("temperature in celcius is %f\n",C);
return 0;
}
