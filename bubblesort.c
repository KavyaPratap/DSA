#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

int main() {
    int arr[] = { 5, 6, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    bubbleSort(arr, n);
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}


// bubble sort without pointer...
#include <stdio.h>
int main() {
    int n,i,j,temp;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array-\n");
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
