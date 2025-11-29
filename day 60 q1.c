#include <stdio.h>

#define MAX 100000

int deque[MAX];   // stores indexes
int front = 0, rear = -1;

void push_back(int x) {
    deque[++rear] = x;
}

void pop_back() {
    rear--;
}

void pop_front() {
    front++;
}

int front_val() {
    return deque[front];
}

int main() {
    int n, k;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        while (rear >= front && arr[deque[rear]] <= arr[i])
            pop_back();
        push_back(i);
    }

    printf("%d ", arr[front_val()]);

    for (int i = k; i < n; i++) {
        
        if (front_val() <= i - k)
            pop_front();

        while (rear >= front && arr[deque[rear]] <= arr[i])
            pop_back();

        push_back(i);

        printf("%d ", arr[front_val()]);
    }

    return 0;
}
