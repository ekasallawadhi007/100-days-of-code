#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum Role role;

    printf("Enter role (1 = ADMIN, 2 = USER, 3 = GUEST): ");
    scanf("%d", (int*)&role);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Hello, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Greetings, Guest! You have view-only access.\n");
            break;

        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
