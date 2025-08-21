#include<stdio.h>
#include<conio.h>

int main()
{

      int a,b,sum,sub,multi;
      float div;
      printf("Enter the first number a=");
      scanf("%d",&a);
      printf("Enter the second number b=");
      scanf("%d",&b);
      sum=a+b;
      sub=a-b;
      multi=a*b;
      div=a/b;
      printf("\naddition%d \nsubtraction%d \nmultiplication%d \ndivision%f",sum,sub,multi,div);
      }

