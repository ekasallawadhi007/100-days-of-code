#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;              
    digits = log10(num);          
    first = num / pow(10, digits); 

    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    swapped = last * pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}
