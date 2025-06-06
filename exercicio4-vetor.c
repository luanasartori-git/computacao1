 #include <stdlib.h>

void preencheVetor(int v[], int n, int lim) {

    for (int i = 0; i < n; i++) {

        v[i] = rand() % (lim + 1);
    }
}
