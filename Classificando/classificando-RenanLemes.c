#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1, nota2, nota3, media, soma;

    printf("insira tres notas de 0 a 10:\n");
    scanf("%i", &nota1);
    scanf("%i", &nota2);
    scanf("%i", &nota3);

    soma=nota1+nota2+nota3;
    media=soma/3;
    //printf("soma e media, sao respectivamente %i e %i", soma, media);
    //printf("nota1, nota2, nota3 sao respectivamente %i, %i, %i\n", nota1, nota2, nota3);
if (nota1<0 || nota1>10 || nota2<0 || nota2>10 || nota3<0 || nota3>10)
    printf("coloque apenas valores de 0 a 10");
else
    switch(media){
       case 5:
       case 4:
       case 3:
       case 2:
       case 1:
        printf("insuficiente");
      break;
       case 6:
       case 7:
        printf("mediocre");
      break;
       case 8:
       case 9:
       case 10:
        printf("excelente");
      break;
    }


    return 0;
}
