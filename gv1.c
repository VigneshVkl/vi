#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
for(b=0;a>10;b++)
{
a=a/10;
}
printf("%d",b);
return 0;
}
