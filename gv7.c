#include<stdio.h>
int main()
{
	int a[10],n,i,j,temp;
	clrscr();
	printf("enter the elements of array");
	sacnf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=o;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	printf("sorted elements are:\t");
	for(i=0;i<n;i++)
	{
		printf("%d"\n\t",a[i]);
	}
}
