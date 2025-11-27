#include <stdio.h>
#include <string.h>

int main() {
    char str[200], reversed[200];
    int i = 0, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0, j = length - 1; j >= 0; i++, j--) {
        reversed[i] = str[j];
    }
    reversed[i] = '\0'; 

    printf("Reversed string: %s\n", reversed);

    return 0;
}
