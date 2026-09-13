//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

int main()
{
    int num1, num2, a, b, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }

    gcd = a;
    lcm = (num1 * num2) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}