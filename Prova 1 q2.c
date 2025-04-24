#include<stdio.h>
int main ()
{
  float distancia, minutos, segundos, ritmo_minutos, ritmo_segundos;

        printf("Qual eh a distancia?: ");
        scanf("%f", &distancia);

        printf("Em quantos minutos voce percorreu?: ");
        scanf("%f", &minutos);

        printf("Em quantos segundos voce percorreu?: ");
        scanf("%f", &segundos);

        ritmo_minutos = (minutos/distancia);

        ritmo_segundos = (segundos/distancia);

        printf("Seu ritmo em minutos por km foi: %f e em segundos por km foi: %f", ritmo_minutos, ritmo_segundos);


    return 0;

}
