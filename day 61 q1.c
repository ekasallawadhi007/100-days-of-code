#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int queue[n];   
    int front = 0, rear = -1;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            queue[++rear] = i;
    }

    if (front <= rear)
        printf("%d ", arr[queue[front]]);
    else
        printf("0 ");

    for (int i = k; i < n; i++) {

        if (front <= rear && queue[front] <= i - k)
            front++;

        if (arr[i] < 0)
            queue[++rear] = i;

        if (front <= rear)
            printf("%d ", arr[queue[front]]);
        else
            printf("0 ");
    }

    return 0;
}
