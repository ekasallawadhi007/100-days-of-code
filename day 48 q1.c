#include <stdio.h>
#include <string.h>


int isSubstring(char str1[], char str2[]) {
    if (strstr(str1, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[200], str2[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

    char temp[400];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (isSubstring(temp, str2))
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}
