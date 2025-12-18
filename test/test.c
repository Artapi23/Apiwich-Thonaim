#include <stdio.h>

struct student {
    char name[50];
    int age;
    float gpa;
};

// Function prototype
void GetStudent();

int main() {
    GetStudent(); // Call the function to begin data entry
    return 0;
}

void GetStudent() {
    int numClassrooms;
    printf("Enter the number of classrooms: ");
    scanf("%d", &numClassrooms);

    // Array to store data for classrooms (each with 10 students)
    struct student school[numClassrooms][10];

    // Nested loops: Outer loop for classrooms, inner loop for 10 students each
    for (int i = 0; i < numClassrooms; i++) {
        printf("\n--- Classroom %d ---\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Student %d Name: ", j + 1);
            scanf("%s", school[i][j].name);
            printf("Student %d Age: ", j + 1);
            scanf("%d", &school[i][j].age);
            printf("Student %d GPA: ", j + 1);
            scanf("%f", &school[i][j].gpa);
        }
    }
    printf("\nData entry complete for %d classrooms.\n", numClassrooms);
}