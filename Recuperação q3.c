#include<stdio.h>
int main ()
{
    int n1, entrada_intervalo, saida_intervalo, multiplo, soma, i = n1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite outro numero inteiro para ser o inicio do intervalo: ");
    scanf("%d", &entrada_intervalo);

    printf("Digite outro numero inteiro para ser o fim do intervalo: ");
    scanf("%d", &saida_intervalo);

    for (i = entrada_intervalo ; i<= saida_intervalo; i++)

    {
        if (i % n1 == 0)
        {
            soma += i;
        }

    }



    printf("A soma dos multiplos de %d dentro do intervalo definido eh: %d", n1, soma);


    return 0;
}
