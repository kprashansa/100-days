//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    int dd, mm, yyyy;

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4) {
        printf("%02d-Apr-%d", dd, yyyy);
    } else {
        printf("Invalid date");
    }

    return 0;
}