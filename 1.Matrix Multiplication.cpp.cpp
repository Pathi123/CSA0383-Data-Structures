#include<stdio.h>
int main()
{
	int a[20][20];
	int b[20][20];
	int m[20][20];
	int r1,c1,r2,c2,k,i,j;
	printf("Enter the no. rows for Matrix1: ");
	scanf("%d",&r1);
	printf("Enter the no. columns for Matrix1: ");
	scanf("%d",&c1);		
	printf("Enter the no. rows for Matrix2: ");
	scanf("%d",&r2);
	printf("Enter the no. columns for Matrix2: ");
	scanf("%d",&c2);
	if(c1!=r2)
	{
		printf("Matrix can not be multiplied");
	}
	else
	{
		printf("Enter elements of matrix1: \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter elements of matrix2: \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				m[i][j]=0;
				for(k=0;k<r2;k++)
				{
					m[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("Multiplication of matrix = \n");
		for(i=0;i<r1;i++)    
		{    
			for(j=0;j<c2;j++)    
			{    
				printf("%d ",m[i][j]);    
			}    
			printf("\n");   
		}
	}
	return 0;
}	
