#include <stdio.h>
#define N 3

int ehQuadradoMagico(int m[N][N]) {
    int soma_esperada = 0;

    for (int j = 0; j < N; j++) {
        soma_esperada += m[0][j];
    }

    for (int i = 1; i < N; i++) {
        int soma_linha = 0;
        for (int j = 0; j < N; j++) {
            soma_linha += m[i][j];
        }
        if (soma_linha != soma_esperada)
            return 0;
    }

    for (int j = 0; j < N; j++) {
        int soma_coluna = 0;
        for (int i = 0; i < N; i++) {
            soma_coluna += m[i][j];
        }
        if (soma_coluna != soma_esperada)
            return 0;
    }

    int soma_diag_principal = 0;
    for (int i = 0; i < N; i++) {
        soma_diag_principal += m[i][i];
    }
    if (soma_diag_principal != soma_esperada)
        return 0;

    int soma_diag_secundaria = 0;
    for (int i = 0; i < N; i++) {
        soma_diag_secundaria += m[i][N - 1 - i];
    }
    if (soma_diag_secundaria != soma_esperada)
        return 0;

    return 1;
}

int main() {
    int matriz[N][N] = {
        {8, 0, 7},
        {4, 5, 6},
        {3, 10, 2}
    };

    if (ehQuadradoMagico(matriz)) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz NAO é um quadrado mágico.\n");
    }

    return 0;
}
