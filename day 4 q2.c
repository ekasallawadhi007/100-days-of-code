#include <stdio.h>

int main() {
    int n;
    int sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}
