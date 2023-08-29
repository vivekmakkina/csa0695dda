#include<stdio.h>
int main()
{
	int max,min,i,j,count;
	printf("enter min range:");
	scanf("%d",&min);
	printf("enter max range:");
	scanf("%d",&max);
	printf("prime numbers are:");
	for(i=min;i<max;i++)
	{
		count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
	if(count==0 & i!=1)
	{
		printf("%d,",i);
	}
	}
}
