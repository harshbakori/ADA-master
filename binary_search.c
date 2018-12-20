#include <stdio.h>
#include <conio.h>
    int sc,n;
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
/////////////////code is not working !!!//////////////////////
int num=0;

void devide(int a[],int n)
{
   int N=n/2;
   num=N;
    int b[N],i=0;
    printf("%d \n",num);
    if(a[N]==sc){printf("The element is at %d position",num);}
    if(a[N]>sc){int j=N ;while(i!=0){b[i]=a[j];i--;j++;}devide(b,n);}
    if(a[N]<sc){int j=N ;num+=N;while(i!=n){b[i]=a[j];i++;j++;}devide(b,n);}
    num+=1;
}
/////////////////code is not working !!!//////////////////////
int main()
{
    printf("Enter the total number of element");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    selectionSort(a,n);
    printf("\nEnter the number to search\n");
    scanf("%d",&sc);
    printArray(a,n);
    devide(a,n);
    return 0;
}