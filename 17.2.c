//Q34: Write a program to check if a number is prime.
#include <stdio.h>

int main()
{
    int num, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a Prime number.\n", num);
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d is a Prime number.\n", num);
        else
            printf("%d is not a Prime number.\n", num);
    }

    return 0;
}