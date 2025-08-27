#include<stdio.h>

int main()
{

float H,A,L;

printf("Enter the side length of the triangle:");
scanf("%f",&L);

printf("Enter the height of the triangle:");
scanf("%f",&H);

A=0.5*H*L;

printf("\nArea of the triangle is %.3f",A);
return 0;

}
