#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;

    srand(time(NULL));

    printf("Matriz Original:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 100;
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Transposta:\n");
    for (j = 0; j < COLUNAS; j++) {
        for (i = 0; i < LINHAS; i++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
