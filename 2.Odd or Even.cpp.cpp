#include<stdio.h>
int main()
{
	int a[50],n,i;
	printf("Enter the no. elements: ");
	scanf("%d",&n);	
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even = ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d  ",a[i]);
		}
	}
	printf("\n");
	printf("Odd = ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d  ",a[i]);
		}
	}
}
