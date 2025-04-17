#include<stdio.h>
int main ()
{
   int numero, contPositivos = 0, soma = 0;
   float media;

   printf("Digite numeros inteiros (-1000 para encerrar): \n");
   scanf("%d", &numero);

   while(numero != -1000)
   {
       if(numero > 0)
       {
           soma += numero;
           contPositivos++;
       }
       printf("Digite numeros inteiros (-1000 para encerrar): \n");
       scanf("%d", &numero);
   }
   if(contPositivos > 0)
   {
       media = soma / contPositivos;
       printf("Quantidade de valores positivos: %d\n", contPositivos);
       printf("Media dos valores positivos: %.1f\n", media);
   }
   else
   {
       printf("Nenhum valor positivo foi digitado. \n");
   }

   return 0;
}
