#include <stdio.h>

// Function declaration
void mult_2d_array(int A[][10], int B[][10], int C[][10], int r1, int c1, int c2);

int main() {
    int i, j, A[10][10], B[10][10], C[10][10], r1, c1, r2, c2;

    // Input sizes of arrays A and B
    printf("Enter size of array A (rows and columns): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter size of array B (rows and columns): ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Array size mismatched for multiplication\n");
        return 0;
    }

    // Input elements for array A
    printf("Enter elements of array A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    // Input elements for array B
    printf("Enter elements of array B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Call the function to multiply the arrays
    mult_2d_array(A, B, C, r1, c1, c2);

    // Print the resulting array C
    printf("Resulting array C:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function to multiply two 2D arrays
void mult_2d_array(int A[][10], int B[][10], int C[][10], int r1, int c1, int c2) {
    int i, j, k;
 
    // Initialize array C to zero
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
