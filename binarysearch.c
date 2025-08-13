
//binary search without recursion
// logic--
//     we have a sorted array pf length n, if not sortd then sort it.
//     we first initialize an array and mentions low and high as 0 and n-1 respectively.
//     binary search work like this-- if array has n elements....dvide it by (low+(high-low))/2, so at to find mid...if element we are finding is > mid, ignore elemnents<key...and new low is mid+1...and vice versa
//     so we create a while loop to iterate through array and calculate mid....and we make 3 conditions to check element...if element found ....else element not found


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
