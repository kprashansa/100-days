//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main()
{
    int n, k, i, j;
    int arr[100];
    int sum, maxSum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid value of k.\n");
        return 0;
    }

    maxSum = 0;

    for (i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    for (i = 1; i <= n - k; i++)
    {
        sum = 0;

        for (j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d\n", maxSum);

    return 0;
}