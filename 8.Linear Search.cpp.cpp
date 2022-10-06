#include <stdio.h>  
int linearSearch(int a[], int n, int val) 
{  
  // Going through array sequencially  
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == val)  
        {
        	return i+1;
		}  
    }  
  return -1;  
}  
int main() 
{    
  int a[100],n,i,val; // size of array   
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  printf("Enter the element to search: ");
  scanf("%d",&val);
  int res = linearSearch(a, n, val); // Store result
  printf("The elements of the array are - \n");  
  for (int i = 0; i < n; i++)
  {
  	printf("%d ", a[i]); 
  }    
  printf("\nElement to be searched is - %d\n", val);  
  if (res == -1)  
  {
  	printf("\nElement is not present in the array"); 
  } 
  else  
  {
  	printf("\nElement is present at %d position of array", res);  
  }
  return 0;  
}  
