#include <stdio.h>

int main() {
    FILE *fp;
    char text[256];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    getchar();  

    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text successfully appended to the file.\n");

    return 0;
}
