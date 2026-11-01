//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks: ");
        scanf("%49s %d %d", name, &roll, &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error reading file.");
        return 1;
    }

    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}
