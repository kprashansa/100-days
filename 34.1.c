///*
Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the initial size of the array
    scanf("%d", &n);
    
    // Declare an array with extra space to accommodate the new element
    int arr[n + 1];
    
    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos, val;
    // Read the target position (0-based index) and the new value
    scanf("%d %d", &pos, &val);
    
    // Shift elements from the end down to the target position
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    
    // Insert the new value at the given position
    arr[pos] = val;
    
    // Increase the size of the array
    n++;
    
    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}