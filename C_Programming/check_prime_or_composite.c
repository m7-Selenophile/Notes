#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
      if(n%i==0)
	break
    }
  if(i==n)
    printf("\nThe given number is prime");
  else
    printf("\nThe given number is composite");
}
