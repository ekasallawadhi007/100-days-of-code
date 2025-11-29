#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastIndex[256];   // stores last seen index of each char
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; i < strlen(s); i++) {
        // If character is repeated inside current window, move start
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        // Update last seen index of character
        lastIndex[(unsigned char)s[i]] = i;

        // Update maximum window size
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);

    return 0;
}
