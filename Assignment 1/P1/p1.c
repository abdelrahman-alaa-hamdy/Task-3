#include <stdio.h>

struct student_info {
    int roll_number;
    char name[50];
    int age;
    char address[100];
    float marks;
};

int main() {
    struct student_info students[15];

    
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

    
    printf("Information for all students:\n");
    for (int i = 0; i < 15; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
