//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()

{

    int n, i, num = 1, den = 2;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            sum = sum + 1;
        else
        {
            num = num + 2;
            den = den + 2;
            sum = sum + (float)num / den;
        }
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}