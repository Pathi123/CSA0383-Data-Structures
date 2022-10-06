#include <stdio.h>
int main()
{
	int arr[100] = { 0 };
 	int i, x, pos,n,po,c;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
 // initial array of size 10
 	printf("Enter the elements: ");
 	for (i = 0; i <n; i++)
 	{
 		scanf("%d",&arr[i]);
 	}
 // print the original array
 printf("Original array: \n");
 	for (i = 0; i < n; i++)
 	{
 		printf("%d ", arr[i]);
 	}
 	printf("\n");
 // element to be inserted
	printf("Enter number to be inserted: ");
	scanf("%d",&x);
 // position at which element
 // is to be inserted
 	printf("Enter position: ");	
	scanf("%d",&pos);
 // increase the size by 1
 	n++;
 // shift elements forward
 	for(i=n-1; i>=pos;i--)
 	{
 		arr[i] = arr[i - 1];
	}
 // insert x at pos
 	arr[pos - 1] = x;
 // print the updated array
 printf("Array after insert= \n");
 	for (i = 0; i<n;i++)
 	{
 		printf("%d ", arr[i]);
	}
	printf("\nEnter position to delete: ");	
	scanf("%d",&po);
    printf("\n");
	if (po >= n+1)
	{
		printf("\nDeletion not possible.\n");
	}
	else
	{
		int g=po-1;
		int h=n;
		int q=n-1;
		for(c =g; c<h; c++)
		{
			arr[c] = arr[c+1];
		}
		

		printf("\nArray after deletion : ");

		for (c = 0; c <q; c++)
		{
			printf("%d ", arr[c]);
		}
}

    return 0;
}
