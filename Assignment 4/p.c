#include <stdio.h>

struct database {
    union {
        struct {
            char name[50];
            char location[50];
        } shops;

        struct {
            int id;
            double price;
            int quantity;
        } product_info;

        struct {
            int id;
            int products_num;
        } category;
    } data;
};

int main() {
    struct database db; 

    printf("Size of struct database: %ld bytes\n", sizeof(struct database));
    printf("Size of union data: %ld bytes\n", sizeof(union { struct { char name[50]; char location[50]; }; struct { int id; double price; int quantity; }; struct { int id; int products_num; }; }));

    return 0;
}
