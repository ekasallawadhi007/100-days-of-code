#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[200], str2[200];
    int freq1[26] = {0}, freq2[26] = {0}; 
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (str1[strlen(str1)-1] == '\n') str1[strlen(str1)-1] = '\0';
    if (str2[strlen(str2)-1] == '\n') str2[strlen(str2)-1] = '\0';

    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            char ch = tolower(str1[i]);
            freq1[ch - 'a']++;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            char ch = tolower(str2[i]);
            freq2[ch - 'a']++;
        }
    }

    int isAnagram = 1;
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
