#include<stdio.h>
#include<math.h>
int calcula_raizes(float a, float b, float c, float *x1, float *x2);
int main ()
{
    int resultado;
    float a, b, c, x1, x2;

    printf("Informe os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    resultado = calcula_raizes( a, b, c, &x1, &x2);

    if (resultado == 2)
        printf("As raizes sao: %f %f", x1, x2);
    else if (resultado == 1)
        printf("A raiz eh: %f", x1);
    else
        printf("Nao tem raiz real");

    return 0;

}

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{

    float delta;

    delta = ((b * b) - (4 * a * c));

    if (a == 0)
    {
        return 0;
    }

    if (delta<0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        *x1 = -b/2*a;

        return 1;
    }

    if (delta > 0)
    {
        *x1 = (-b + sqrt(delta))/2*a;
        *x2 = (-b - sqrt(delta))/2*a;
        return 2;
    }

}
