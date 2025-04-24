#include<stdio.h>
int main ()
{
    float base, altura, largura = 0.8, perimetro, area, rodape;

    printf("Digite a base(em metros): ");
    scanf("%f", &base);

    printf("Digite a altura(em metros): ");
    scanf("%f", &altura);

    perimetro = (2*(base + altura));

    rodape = (2*(base + altura) - largura);

    area = (base * altura);

    printf("O perimetro total eh: %f", perimetro);

    printf("A quantidade de rodape necessaria eh: %f", rodape);

    printf("A area do quarto eh: %f", area);

    return 0;

}
