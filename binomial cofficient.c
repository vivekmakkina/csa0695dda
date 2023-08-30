#include<stdio.h>
int bincoeff(int n,int k)
{
	if(k>n)
	return 0;
	if(k==0||k==n)
	return 1;
	return bincoeff(n-1,k-1)+bincoeff(n-1,k);
}
int main()
{
	int n=5,k=2;
	printf("value of C(%d,%d) is %d",n,k,bincoeff(n,k));	
}
