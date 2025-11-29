#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int val = abs(arr[i]);

        if (arr[val] < 0) {
            printf("%d\n", val);   // Repeated element found
            return 0;
        }

        arr[val] = -arr[val];
    }

    // Should not reach here if one element is guaranteed to repeat
    printf("No repetition\n");
    return 0;
}
