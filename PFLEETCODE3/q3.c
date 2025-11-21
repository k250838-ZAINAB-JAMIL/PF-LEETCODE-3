#include <stdio.h>

#define MAX 20


void rotateMatrix(int n, int matrix[MAX][MAX]) {
    int i, j;

    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

  
    for (i = 0; i < n; i++) {
        for (j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - 1 - j];
            matrix[i][n - 1 - j] = temp;
        }
    }
}


void printMatrix(int n, int matrix[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, j;
    int matrix[MAX][MAX];

    printf("Enter size of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    rotateMatrix(n, matrix);

    printf("\nRotated matrix by 90 degrees clockwise:\n");
    printMatrix(n, matrix);

    return 0;
}
