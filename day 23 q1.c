#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i;        // 2, 4, 6, 8, ...
        float denominator = 4 * i - 1;  // 3, 7, 11, 15, ...
        
        sum += numerator / denominator;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
