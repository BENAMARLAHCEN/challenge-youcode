#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter a date in the format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &month, &year);

    char* monthName;

    switch (month) {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
        default:
            printf("Invalid month.\n");
            return 0;
    }

    printf("The formatted date is: %d-%s-%d\n", day, monthName, year);

    return 0;
}