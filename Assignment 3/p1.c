#include <stdio.h>

struct test {
    int id;
    char class_id;
    char name[50];
};

int main() {
    printf("Size of struct: %ld bytes\n", sizeof(struct test));

    // Reorder the struct to have the string as the first field
    struct test test2 {
        name = "Abdelrahman",
        id = 1,
        class_id = 'A',
    };

    printf("Size of reordered struct: %ld bytes\n", sizeof(struct test));

    return 0;
}
