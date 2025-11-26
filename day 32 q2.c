#include <stdio.h>

int main() {
    long num;
    int count[10] = {0};  
    int i, max = 0, digit;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if(num < 0) num = -num;

    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }

    printf("Digit that occurs the most: %d (occurs %d times)\n", digit, max);

    return 0;
}
