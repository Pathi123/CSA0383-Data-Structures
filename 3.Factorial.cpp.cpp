#include<stdio.h>
int main()
{
	long long int a1=1,i,n;
	printf("N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a1=a1*i;
	}
	printf("Factorial of %d = %d",n,a1);
}
