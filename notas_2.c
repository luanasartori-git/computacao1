#include <stdio.h>
int main ()
{
    float n1, n2, n3, media;
    int frequencia;

    printf("Insira as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite a frequencia: ");
    scanf("%d", &frequencia);

    media = (n1 + n2 + n3)/3;

    if (media > 8 && frequencia >= 75)
        printf("O estudante foi Aprovado com distincao pois teve media %f e frequencia %d%%", media, frequencia);
    else if (media >= 6 && frequencia >= 75)
        printf("O estudante foi Aprovado Direto pois teve media %f e frequencia %d%%", media, frequencia);
    else if (media >= 4 && media < 6 && frequencia >= 75 )
        printf("O estudante vai para a final pois teve media %f e frequencia %d%%", media, frequencia);
    else if (media >= 6 && frequencia < 75)
        printf("O estudante vai para a final pois teve media %f e frequencia %d%%", media, frequencia);
    else if (media <= 4 && frequencia > 50 && frequencia < 75)
        printf("O estudante vai para a final pois teve media %f e frequencia %d%%", media, frequencia);
    else
        printf("Reprovado Direto");
    return 0;
}
