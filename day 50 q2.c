#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;
    int n;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    n = strlen(str);

    printf("All substrings of the string:\n");

    for (i = 0; i < n; i++) {           
        for (j = i; j < n; j++) {      
            for (k = i; k <= j; k++) {  
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
