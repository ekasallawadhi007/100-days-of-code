#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);

    // Find position of last space (before surname)
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    printf("Output: ");

    // Print initials for first and middle names
    if (lastSpace != -1) {
        for (i = 0; i < lastSpace; i++) {
            if (i == 0 || (name[i] != ' ' && name[i-1] == ' ')) {
                printf("%c.", toupper(name[i]));
            }
        }
        // Print surname in full
        printf(" %s\n", &name[lastSpace + 1]);
    } else {
        // No spaces found, print the name as is
        printf("%s\n", name);
    }

    return 0;
}
