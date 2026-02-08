#include <stdio.h>
#include <stdlib.h>
int maxnum(int arr [],int min,int max){
    int n,i;
    n=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter number of lements for array: ");
    scanf("%d",&n);
    int arr[n],i,min,max=0;
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxnum(arr,1,5);
}
