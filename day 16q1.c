#include <stdio.h>

void toBinary(int n) {
    int binary[32];   
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    toBinary(num);

    return 0;
}
