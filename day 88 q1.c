#include <stdio.h>

enum Status {
    SUCCESS = 0,
    FAILURE = 1,
    TIMEOUT = 2,
    UNKNOWN = 3
};

int main() {
    enum Status s;

    const char *names[] = {
        "SUCCESS",
        "FAILURE",
        "TIMEOUT",
        "UNKNOWN"
    };

    printf("Enum Name\tValue\n");
    printf("-------------------------\n");

    for (s = SUCCESS; s <= UNKNOWN; s++) {
        printf("%s\t\t%d\n", names[s], s);
    }

    return 0;
}
