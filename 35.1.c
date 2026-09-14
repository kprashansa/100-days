/*
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/

#include <stdio.h>
#include <limits.h> // To use INT_MIN

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max1 = INT_MIN; // Largest element
    int max2 = INT_MIN; // Second largest element
    
    // Loop through the array to find max1 and max2
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;      // Old max becomes second max
            max1 = arr[i];    // Update max1 to the new largest
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];    // Update max2 if it's strictly between max1 and max2
        }
    }
    
    // Print the second largest element
    printf("%d\n", max2);
    
    return 0;
}