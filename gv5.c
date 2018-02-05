#include<stdio.h>
int main()
{
int n,i,a=0;
printf("enter the positive integer");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
a=1;
break;
}
}
if (a==0)
printf("%d is an prime number.",n);
else
printf("%d is not an prime number.",n);
return 0;
}
