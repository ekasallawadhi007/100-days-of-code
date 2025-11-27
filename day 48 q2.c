#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    int start, end, i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

   
    sentence[strcspn(sentence, "\n")] = '\0';

    start = 0;
    i = 0;

    while (1) {
        
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            end = i - 1;
           
            while (start < end) {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }
            start = i + 1; 
        }

        if (sentence[i] == '\0')
            break;

        i++;
    }

    printf("Sentence after reversing words:\n%s\n", sentence);

    return 0;
}
