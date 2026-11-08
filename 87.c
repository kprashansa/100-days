//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char role[20];
    enum Role r;

    printf("Enter user role: ");
    scanf("%s", role);

    if (strcmp(role, "ADMIN") == 0) {
        r = ADMIN;
    }
    else if (strcmp(role, "USER") == 0) {
        r = USER;
    }
    else if (strcmp(role, "GUEST") == 0) {
        r = GUEST;
    }
    else {
        printf("Invalid role!");
        return 0;
    }

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}
