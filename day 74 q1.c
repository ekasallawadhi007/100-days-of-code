#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    int ch;

    // Take filenames from the user
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    // Open destination file
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not open/create destination file.\n");
        fclose(src);
        return 1;
    }

    // Copy contents using fgetc() and fputc()
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}
