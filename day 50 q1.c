#include <stdio.h>

int main() {
    char date[20];   // Input date in dd/mm/yyyy format
    char day[3], month[3], year[5];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    // Extract day
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    // Extract month (assume always 04)
    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    // Extract year
    int i, j = 0;
    for (i = 6; date[i] != '\0'; i++, j++) {
        year[j] = date[i];
    }
    year[j] = '\0';

    // Convert month number to abbreviation
    char monthStr[4];
    if (strcmp(month, "01") == 0) strcpy(monthStr, "Jan");
    else if (strcmp(month, "02") == 0) strcpy(monthStr, "Feb");
    else if (strcmp(month, "03") == 0) strcpy(monthStr, "Mar");
    else if (strcmp(month, "04") == 0) strcpy(monthStr, "Apr");
    else if (strcmp(month, "05") == 0) strcpy(monthStr, "May");
    else if (strcmp(month, "06") == 0) strcpy(monthStr, "Jun");
    else if (strcmp(month, "07") == 0) strcpy(monthStr, "Jul");
    else if (strcmp(month, "08") == 0) strcpy(monthStr, "Aug");
    else if (strcmp(month, "09") == 0) strcpy(monthStr, "Sep");
    else if (strcmp(month, "10") == 0) strcpy(monthStr, "Oct");
    else if (strcmp(month, "11") == 0) strcpy(monthStr, "Nov");
    else if (strcmp(month, "12") == 0) strcpy(monthStr, "Dec");
    else strcpy(monthStr, "Err"); // Error for invalid month

    // Print the formatted date
    printf("Formatted date: %s-%s-%s\n", day, monthStr, year);

    return 0;
}
