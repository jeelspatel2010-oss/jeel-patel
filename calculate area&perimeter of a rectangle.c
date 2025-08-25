#include<stdio.h>

int main()


{
float L,B,P,A;

printf("Enter lenth of the rectangle:");
scanf("%f",&L);

printf("Enter width of the rectangle:");
scanf("%f",&B);

A=L*B;
P=2*(L+B);

printf("\nArea of rectangle=%.2f",A);
printf("\nperimter of rectangle=%.2f\n",P);
return 0;
}
