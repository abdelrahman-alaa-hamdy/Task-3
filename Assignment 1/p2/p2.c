#include <stdio.h>

struct student_info {
    int roll_number;
    char name[50];
    int age;
    char address[100];
    float marks;
};

int print_student_info(struct student_info students[]) {
    int count = 0;
    printf("Information for all students:\n");
    for (int i = 0; i < 15; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
        
        if (students[i].marks < 12.0) {
            count++;
        }
    }
    return count;
}

int main() {
    struct student_info students[15];

    // Get information for 15 students
    for (int i = 0; i < 15; i++) {
        printf("Enter information for student %d:\n", i+1);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_number);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Address: ");
        scanf("%s", students[i].address);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    int less_than_12_count = print_student_info(students);

    printf("\nNumber of students with marks less than 12 out of 20: %d", less_than_12_count);

    return 0;
}
