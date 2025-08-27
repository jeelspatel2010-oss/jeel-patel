#include<stdio.h>

int main()
{

int sub1,sub2,sub3,total;
float average;

printf("Enter marks of subject1:");
scanf("%d",&sub1);

printf("Enter marks of subject2:");
scanf("%d",&sub2);

printf("Enter marks of subject3:");
scanf("%d",&sub3);

total=sub1+sub2+sub3;
average=total/3.0;

printf("\ntotalmarks=%d",total);
printf("\naveragemarks=%.2f\n",average);

return 0;
}
