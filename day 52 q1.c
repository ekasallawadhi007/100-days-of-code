#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            // potential ceil found, move left to find first occurrence
            result = mid;
            right = mid - 1;
        } else {
            // mid element < x, search in right half
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("Index of ceil of %d: %d\n", x, index);

    return 0;
}
