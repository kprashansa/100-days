/*
Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    // Read the number of positions to rotate
    scanf("%d", &k);
    
    // Normalize k in case k is greater than or equal to n
    k = k % n;
    
    int temp[n]; // Temporary array to hold rotated elements
    
    // Place each element in its new rotated position
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    // Copy the rotated elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    
    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}