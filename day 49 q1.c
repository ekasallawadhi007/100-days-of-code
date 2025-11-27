#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    if (name[0] != ' ')
        printf("%c", toupper(name[0]));

    for (i = 1; name[i] != '\0'; i++) {
        
        if (name[i] != ' ' && name[i-1] == ' ') {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");

    return 0;
}
