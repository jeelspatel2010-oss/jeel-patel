#include<stdio.h>
int main()
{
   int a,b,c;

   printf("Enter 3 no.:");
   scanf("%d %d %d",&a,&b,&c);
   int largest,smallest;
   if(a>=b&&a>=c)
   largest=a;
   else if(b>=c&&b>=a)
   largest=b;
   else
   largest=c;
   if(a<=b&&b<=c)
   smallest=a;
   else if(b<=c&&b<=a)
   smallest=b;
   else
   smallest=c;

   printf("Largest value=%d\n",largest);
   printf("Smallest value=%d\n",smallest);
   return 0;
   }
