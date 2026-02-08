// logic

// Start with the second element (the first element is already "sorted").
// Compare it with the elements before it.
// Shift the larger elements one position to the right to make space.
// Insert the current element into its correct position.
// Repeat this for all elements in the list.



//insertion sort
#include <stdio.h>

int main() {
    int n, i, j, key;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array-\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
