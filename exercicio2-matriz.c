#include <stdio.h>

#define N 7

int main() {
    int pascal_triangle[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal_triangle[i][j] = 1;
            } else {
                pascal_triangle[i][j] = pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j];
            }
        }
    }

    printf("Triangulo de Pascal (%d linhas):\n", N);

    for (i = 0; i < N; i++) {

        /*
        for (int space = 0; space < (N - 1 - i) * 2; space++) {
            printf(" ");
        }
        */

        for (j = 0; j <= i; j++) {
            printf("%4d", pascal_triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
