#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date1, date2;
    char str[11];

    // Get input for first date
    printf("Enter the first date (dd/mm/yyyy): ");
    scanf("%s", str);
    sscanf(str, "%d/%d/%d", &date1.day, &date1.month, &date1.year);

    // Get input for second date
    printf("Enter the second date (dd/mm/yyyy): ");
    scanf("%s", str);
    sscanf(str, "%d/%d/%d", &date2.day, &date2.month, &date2.year);

    // Compare the dates
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}
