#include<stdio.h>
// #include<conio.h>
// int a[];
// void bubblesort(int a[],int)
// {

// }
// int main()
// {   
//     printf("Enter  your elements");
//     return 0;
// }
int ele[5];
int i,j,n=5;
void swap(int a,int b){
    int temp = ele[a];
    ele[a]=ele[b];
    ele[b]=temp;
    printf("\nSwapped %d and %d: ",ele[a],temp);
    for(i=0;i<n;i++)
    {
        printf("%d \t",ele[i]);
    }
}
int main()
{   int i,j;
    printf("Enter %d elements: \n",n+1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ele[i]);
    }
    printf("You entered the elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",ele[i]);
    }
// Sorting
    for(i=0;i<n;i++)
    {
        printf("\n Pass: %d \n",i);
        for(j=0;j<n-1;j++)
        {
            if(ele[j]>ele[j+1]){
                swap(j,j+1);
            }
        }
        printf("Pass %d complete.\n",i);
    }
}