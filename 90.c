//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[10];

    printf("Enter Gender (MALE/FEMALE): ");
    scanf("%s", input);

    if (input[0] == 'M' || input[0] == 'm') {
        p.gender = MALE;
    } else {
        p.gender = FEMALE;
    }

    if (p.gender == MALE) {
        printf("Male\n");
    } else {
        printf("Female\n");
    }

    return 0;
}
