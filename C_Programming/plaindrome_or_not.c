#include<stdio.h>
void main()
{
   int n,temp,sum=0, d;
   printf("Enter a number");
   scanf("%d",&n);
   temp = n;
   while(n!=0)
   {
     d = n%10;
     sum = sum*10 + d;
     n = n/10;
   }
if (temp == sum)
    printf("\nGiven number is Palindrome");
else
    printf("\nGiven number is not Palindrome");
}
