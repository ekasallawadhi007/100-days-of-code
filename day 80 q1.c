#include <stdio.h>

int main() {
    FILE *fp;
    
    int n, roll;
    char name[50];
    float marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create students.txt\n");
        return 1;
    }

    printf("How many students? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", name);

        printf("Roll Number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open students.txt\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
