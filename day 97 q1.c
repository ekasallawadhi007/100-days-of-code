#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Read employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Joining Date (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].joiningDate.day,
                          &employees[i].joiningDate.month,
                          &employees[i].joiningDate.year);
    }

    // Write to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fwrite(employees, sizeof(struct Employee), n, fp);
    fclose(fp);
    printf("\nData written to employees.dat successfully.\n");

    // Read from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    struct Employee readEmployees[n];
    fread(readEmployees, sizeof(struct Employee), n, fp);
    fclose(fp);

    // Display employee details
    printf("\n--- Employee Details from File ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", readEmployees[i].name);
        printf("ID: %d\n", readEmployees[i].id);
        printf("Salary: %.2f\n", readEmployees[i].salary);
        printf("Joining Date: %02d-%02d-%04d\n",
               readEmployees[i].joiningDate.day,
               readEmployees[i].joiningDate.month,
               readEmployees[i].joiningDate.year);
    }

    return 0;
}
