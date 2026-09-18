//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int a[100][100], r, c, i, j, d;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (d = 0; d < r + c - 1; d++) {
        if (d % 2 == 0) {
            for (i = (d < r ? d : r - 1); i >= 0; i--) {
                j = d - i;
                if (j >= 0 && j < c)
                    printf("%d ", a[i][j]);
            }
        } else {
            for (i = 0; i < r; i++) {
                j = d - i;
                if (j >= 0 && j < c)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}