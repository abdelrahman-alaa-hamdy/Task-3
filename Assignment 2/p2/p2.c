#include <stdio.h>

struct info {
    char name[50];
    int age;
};

int main() {
    struct info person = {"Abdelrahman", 21}; 
    struct info *person_ptr; 

    person_ptr = &person; 

    
    printf("Name: %s\n", person_ptr->name);
    printf("Age: %d\n", person_ptr->age);

    return 0;
}
