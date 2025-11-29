#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    
    // Read the whole line
    fgets(s, sizeof(s), stdin);

    // Convert first character
    if (s[0] != '\0')
        s[0] = toupper(s[0]);

    // Convert rest to lowercase
    for (int i = 1; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }

    printf("%s", s);

    return 0;
}
