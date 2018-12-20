#include <stdio.h>
#include <conio.h>

int main()
{
    int sc,n;
    printf("Enter the total number of element");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\nEnter the number to search\n");
    scanf("%d",&sc);
    for(int i=0;i<n;i++)
    {
        if(a[i]==sc)
        {
            printf("\nThe search object is at %d th place",i+1);
        }
    }
    return 0;
}
