#include<stdio.h>
int main ()
{
    float numero,
          maior_numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    maior_numero = numero;

    while(numero >= 0)
    {
        if(numero>maior_numero)(maior_numero = numero);

        printf("Digite mais um numero: ");
        scanf("%f", &numero);
    }
    printf("maior_numero = %f\n", maior_numero);

    return 0;
}
