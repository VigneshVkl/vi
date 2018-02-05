#include<stdio.h>
#include<math.h>
int main()
{
int result,n,power;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the power of number\n");
scanf("%d",&power);
while(power!=0)
{
power*=n;
power--;
}
printf("\n%d",result);
return 0;
}
