#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    int ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion complete. Output written to output.txt\n");
    return 0;
}
