#include <stdio.h>

int main() {
    int p, q, r;

    printf("Enter rows and columns of Matrix A (p q): ");
    scanf("%d %d", &p, &q);

    printf("Enter columns of Matrix B (r): ");
    scanf("%d", &r);

    int A[p][q], B[q][r], C[p][r];

    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A × B):\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
