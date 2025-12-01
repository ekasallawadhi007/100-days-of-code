#include <stdio.h>

enum Example {
    A,        // auto = 0
    B,        // auto = 1
    C = 10,   // explicitly = 10
    D,        // auto = 11 (follows previous)
    E = 20    // explicitly = 20
};

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}
