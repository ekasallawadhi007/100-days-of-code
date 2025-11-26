#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int g = gcd(a, b);

    lcm = (a * b) / g;

    printf("LCM = %d\n", lcm);

    return 0;
}
