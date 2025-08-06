
//program for finding min max numbers in array 

#include <stdio.h>

int main(){
    int n;
    printf("Enter number of lements for array: ");
    scanf("%d",&n);
    int arr[n],i,min,max=0;
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Max number: ");
    for (i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    min=max;
    for(i=0;i<n;i++){
        
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum number- %d\n",max);
    printf("Minimun number- %d",min);
}
