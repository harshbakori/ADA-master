#include <stdio.h>
void swap(int *a,int *b)
{   
    int temp=*a;
    *a=*b;
    *b=temp; 
}


void selectionSort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
        {
		    if (arr[j] < arr[min])
            {
    			min = j;
            }
		    swap(&arr[min], &arr[i]);
        }
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
    int n;
    printf("enter the length of the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        printf("enement number %d \n",i);
        scanf("%d",&arr[i]);
    }
    printArray(arr,n);
    selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}