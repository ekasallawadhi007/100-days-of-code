#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, sum = 0;
    int digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
