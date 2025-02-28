//Project: Student Grade Calculator
#include <stdio.h>

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int grades[numStudents];
    printf("Enter the grades of %d students:\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        scanf("%d", &grades[i]);
    }

    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += grades[i];
    }

    float average = (float)sum / numStudents;
    printf("Average grade: %.2f\n", average);

    return 0;
}