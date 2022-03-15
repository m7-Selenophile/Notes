#include<stdio.h>
long intfact(int n)
{
   long int f = 1;
   int i;
   for(i=1;i<=n;i++)
   {
    f=f*i;
   }
 return f;
}

void mian()
{
 int n;
 printf("Enter a number ");
 scanf("%d",&n);
 printf("\nThe factorail of given number is %ld",fact(n));
}
