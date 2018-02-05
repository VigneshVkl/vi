#include<stdio.h>
int main()
{
int n,a=0,remainder,b;
printf("enter an integer:");
scanf("%d",&n);
b=n;
while(n!=0)
{
remainder=a%10;
a=a*10+remainder;
n/=10;
}
if b==a
printf("\n%d is an palindrome");
else
printf("\n%dis not an palindrome");
return 0;
}
