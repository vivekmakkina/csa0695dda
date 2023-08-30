#include<stdio.h>
int main()
{
	int num,rem,i,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
		}	
	if(sum==num)
		printf("%d is perfect number",num);
	else
		printf("%d is not a perfect number",num);
}
