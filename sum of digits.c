#include<stdio.h>
int main()
{
	int num,i,sum,rem;
	printf("enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digits%d",sum);
}
