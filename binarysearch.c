
//binary search without recursion

#include <stdio.h>

int main() {
    int n, ele, i, low, high, mid;

    printf("Enter number of elements to enter in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of the array in sorted order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &ele);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == ele) {
            printf("Element found at index %d\n", mid);
            return 0;
        }

        if (arr[mid] < ele) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    printf("Element not found in the array\n");

    return 0;
}
