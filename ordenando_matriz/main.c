#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z=0,w,s,valor,vetor[36],variavel=0,matriz[6][6];


    for(y=0;y<6;y++){
        for(x=0;x<6;x++){
            printf("insira o valor da posicao [%i][%i] na matriz\n\n",y,x);
            scanf("%i",& matriz[y][x]);
          //  printf("o valor da posicao [%i][%i] da matriz eh\n %i\n\n",y,x,matriz[y][x])
          //  printf("%i\n\n",somalin);

        }
        printf("\n\n");
    }

     for(y=0;y<6;y++){
        for(x=0;x<6;x++){
        vetor[z]= matriz[y][x];
        z++;
          //  printf("o valor da posicao [%i][%i] da matriz eh\n %i\n\n",y,x,matriz[y][x])
          //  printf("%i\n\n",somalin);

        }

    }

    for(w=0;w<36;w++){
        printf("vetor[%i]=%i\n",w,vetor[w]);
    }

    for(s=0;s<36;s++){

         if(vetor[s]>vetor[s+1]){
               valor=vetor[s];
               vetor[s]=vetor[s+1];
               vetor[s+1]=valor;
               s=0;

         }
         if(vetor[0]>vetor[1]){
            valor=vetor[1];
            vetor[1]=vetor[0];
            vetor[0]=valor;
            s=0;
         }

        }






/*
    for(y=0;y<6;y++){
        for(x=0;x<6;x++){
            printf("[%i][%i]=%i\t|",y,x,matriz[y][x]);

          //  printf("o valor da posicao [%i][%i] da matriz eh\n %i\n\n",y,x,matriz[y][x])
          //  printf("%i\n\n",somalin);

        }
        printf("\n\n");
    }


*/
    z=0;



    printf("\n\n");

    for(y=0;y<6;y++){
        for(x=0;x<6;x++){
            matriz[y][x]=vetor[z];
            z++;
            printf("[%i][%i]=%i\t",y,x,matriz[y][x]);

        }
    }

    return 0;
}
