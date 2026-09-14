/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the initial size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos;
    // Read the position (0-based index) of the element to delete
    scanf("%d", &pos);
    
    // Shift elements to the left to overwrite the deleted element
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Decrease the size of the array by 1
    n--;
    
    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}