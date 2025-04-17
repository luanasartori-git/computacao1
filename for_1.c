#include<stdio.h>
int main ()
{
    int n, i=1;

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    printf("Numeros de i a 200 que divididos por %d dao resto 3 e sao pares:\n", n);

    for (i = 1; i <= 200; i++)
    {
        if (i%2==0 && i%n==3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
