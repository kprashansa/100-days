//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status status;
    char input[20];

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
    {
        status = SUCCESS;
        printf("Operation successful");
    }
    else if (strcmp(input, "FAILURE") == 0)
    {
        status = FAILURE;
        printf("Operation failed");
    }
    else if (strcmp(input, "TIMEOUT") == 0)
    {
        status = TIMEOUT;
        printf("Operation timed out");
    }

    return 0;
}