#include<stdio.h>
int sum(int n)
{
 if(n<=0)
   return 1;
 else
   return(n+sum(n-1));
}
void main()
{
 int a,f;
 printf("\nEnter a number : ");
 scanf("%d",&n);
 printf("sum is %d",f);
}
