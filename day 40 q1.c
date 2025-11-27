#include <stdio.h>

int main() {
    int n, m;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int A[n][m];

    printf("\nEnter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    for (int startCol = 0; startCol < m; startCol++) {
        int i = 0;
        int j = startCol;

        while (i < n && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    for (int startRow = 1; startRow < n; startRow++) {
        int i = startRow;
        int j = m - 1;

        while (i < n && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
