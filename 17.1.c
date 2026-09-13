//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, remainder, digits = 0;
    int sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + pow(remainder, digits);
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}