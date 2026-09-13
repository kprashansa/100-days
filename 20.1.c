////Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main()
{
    int num, remainder;
    long long product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;

        if (remainder % 2 != 0)
        {
            product = product * remainder;
            found = 1;
        }

        num = num / 10;
    }

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}