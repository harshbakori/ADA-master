#include<stdio.h>
#include<conio.h>
//int a[2]={1,1};
int fibonaki(int n)
{
    int sum = 2;
    int a[n];
    a[0]=1;a[1]=1;
    printf("%d+%d+",a[0],a[1]);
    for(int i=1;i<n-1;i++)
    {
    a[i+1] = a[i]+a[i-1];
    printf("%d",a[i+1]);
    sum = sum + a[i+1];
    if(i<n-2)
    printf("+");
    else
    {
    printf("=%d",sum);}
    }
    return a[n+1];
}
void main(){
    int n;
    printf("Enter the length of the febonaki series \n");
    scanf("%d",&n);
    fibonaki(n);
}