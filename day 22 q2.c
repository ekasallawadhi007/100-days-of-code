#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2*i - 1;     
        float denominator;

        if (i == 1)
            denominator = 1;           
        else
            denominator = 2*i;         

        sum += numerator / denominator;
    }

    printf("Sum of series = %.4f\n", sum);

    return 0;
}
