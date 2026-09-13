//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0};
    int digit, i;
    int max = 0, most = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if(num < 0)
    {
        num = -num;
    }

    if(num == 0)
    {
        count[0] = 1;
    }

    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            most = i;
        }
    }

    printf("Digit occurring most times = %d\n", most);
    printf("Number of times = %d\n", max);

    return 0;
} 