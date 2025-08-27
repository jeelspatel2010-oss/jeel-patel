#include<stdio.h>

int main ()
{

float grosssalary,allowance,deduction,netsalary;
printf("Enter gross salary:");
scanf("%f",&grosssalary);
allowance=0.1*grosssalary;
deduction=0.03*grosssalary;

netsalary=grosssalary+allowance-deduction;

printf("\nnetsalary%.2f",netsalary);
return 0;

}
