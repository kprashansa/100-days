//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, first, last, digits, middle, swapped;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    last = num % 10;

    digits = 0;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    first = num / pow(10, digits - 1);

    middle = (num % (int)pow(10, digits - 1)) / 10;

    swapped = last * pow(10, digits - 1) + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}