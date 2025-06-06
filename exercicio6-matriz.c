#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define MAX_NUM 100

int existeNaCartela(int m[N][N], int nl, int nc, int num) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            if (m[i][j] == num)
                return 1;
        }
    }
    return 0;
}

void preencheBingo(int m[N][N], int nl, int nc) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            int num;
            do {
                num = rand() % MAX_NUM;
            } while (existeNaCartela(m, nl, nc, num));
            m[i][j] = num;
        }
    }
}

void imprimeMatriz(int m[N][N], int nl, int nc) {
    printf("CARTELA DE BINGO:\n");
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int cartela[N][N];
    srand(time(NULL));

    preencheBingo(cartela, N, N);
    imprimeMatriz(cartela, N, N);

    return 0;
}
