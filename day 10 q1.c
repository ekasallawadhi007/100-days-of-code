#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter side a: ");
    scanf("%f", &a);

    printf("Enter side b: ");
    scanf("%f", &b);

    printf("Enter side c: ");
    scanf("%f", &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle\n");
    }
    else {
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    }

    return 0;
}
