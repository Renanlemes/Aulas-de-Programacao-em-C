#include <stdio.h>
#include <stdlib.h>

int main()
{
    float NumeroA, NumeroB, Resultado;
    char operacao;
do{

    scanf("%s",&operacao);
    scanf("%f" "%f",&NumeroA,&NumeroB);
   // printf("numeroA eh %.2f e numeroB eh %.2f\n",NumeroA, NumeroB);

switch(operacao){
    case 'M':
       Resultado=NumeroA*NumeroB;
       printf("O resultado eh %.2f\n",Resultado);
    break;
    case 'D':
        Resultado=NumeroA/NumeroB;
        printf("O resultado eh %.2f\n",Resultado);
    break;
    case 'A':
        Resultado=NumeroA+NumeroB;
        printf("O resultado eh %.2f\n",Resultado);
    break;
    case 'S':
        Resultado=NumeroA-NumeroB;
        printf("O resultado eh %.2f\n",Resultado);
    break;
    }
}while(operacao != 'q');

    return 0;
}
