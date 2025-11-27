#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    char longest[100];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, start = 0, length = 0;

    while (1) {
        // End of word or end of sentence
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            if (length > maxLength) {
                maxLength = length;
                // Copy the word into longest
                strncpy(longest, &sentence[start], length);
                longest[length] = '\0';
            }
            length = 0;
            start = i + 1;
        } else {
            length++;
        }

        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}
