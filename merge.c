#include<stdio.h>
int main()
{
	int i,j,a[10],swap,n;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		
		swap=a[i];
		a[i]=a[j];
		a[j]=swap;
	}
}
	printf("merge sort:");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}
