#include<stdio.h>
int arr[10];
int i,n=3;

void swap(int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    printf("Swapped.! \n");
}

void pivot(){
    int p=arr[0],f=1,l=5;
    while(f!=l){
    for(i=0;i<n;i++){
        printf("\nPass %d\n",i);
        if(p<arr[f]){swap(p,f);
        printf("f=%d p=%d\n",arr[f],p);}
        if(p>arr[l]){swap(p,l);
        printf("l=%d p=%d\n",arr[l],p);}
        f++;l--;
    }
    }
    int temp = arr[0];
    for(i=0;i<f;i++){
        arr[i]=arr[i+1];
    }
    arr[f]=temp;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

int main(){
    printf("Enter 6 elements.:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pivot();
    return 0;
}
