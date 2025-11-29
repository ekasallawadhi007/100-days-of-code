#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s", s);
    scanf("%s", t);

    // If lengths differ, not an anagram
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};

    // Count characters in s
    for (int i = 0; i < strlen(s); i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract characters in t
    for (int i = 0; i < strlen(t); i++) {
        freq[t[i] - 'a']--;
    }

    // If any count is not zero → not an anagram
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
