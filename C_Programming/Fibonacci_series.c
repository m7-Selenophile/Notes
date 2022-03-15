#include<stdio.h>
void main()
{
   int i,a=0,b=1,c=1,n;
   printf("\nEnter a numeber : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
     {
        printf("%d\t",c);
	c = a+b;
	a=b;
	b=c;
     }
}
