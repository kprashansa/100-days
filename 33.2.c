//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int a[100], n, i, num, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    position = n;

    for(i = 0; i < n; i++)
    {
        if(num < a[i])
        {
            position = i;
            break;
        }
    }

    for(i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = num;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
} 