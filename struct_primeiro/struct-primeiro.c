#include <stdio.h>
#include <stdlib.h>

int main()
{
    int compdia, compano, compmes, dmenor, dmaior, amenor, amaior, mmenor, mmaior,n,i=0,diasnosmeses,j=0,m;
    int diasmes [12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    long int diasnosanos, totaldedias;

    struct dma {
    int dia;
    int mes;
    int ano;
    }dma1, dma2;

    printf("insira uma data\n");
    scanf("%i",& dma1.dia);
    scanf("%i",& dma1.mes);
    scanf("%i",& dma1.ano);
    printf("insira outra data\n");
    scanf("%i",& dma2.dia);
    scanf("%i",& dma2.mes);
    scanf("%i",& dma2.ano);
    //printf("seu dia eh %i\n",dma1.dia);
   // printf("seu mes eh %i\n",dma1.mes);
   // printf("seu ano eh %i\n",dma1.ano);
    //printf("seu dia eh %i\n",dma2.dia);
   // printf("seu mes eh %i\n",dma2.mes);
   // printf("seu ano eh %i\n",dma2.ano);

    if(dma1.dia>dma2.dia){
       dmaior=dma1.dia;
       dmenor=dma2.dia;
    }
     else{
        dmaior=dma2.dia;
        dmenor=dma1.dia;
    }


    if(dma1.mes>dma2.mes){
       mmaior=dma1.mes;
       mmenor=dma2.mes;
    }
     else{
        mmaior=dma2.mes;
        mmenor=dma1.mes;
    }






    if(dma1.ano>dma2.ano){
       amaior=dma1.ano;
       amenor=dma2.ano;
    }
     else{
        amaior=dma2.ano;
        amenor=dma1.ano;
    }

  // printf("o dia maior eh %i e o dia menor eh %i", dmaior, dmenor);
    compdia=dmaior-dmenor;
    compano=amaior-amenor;
    compmes=mmaior-mmenor;

    //printf("a diferenca de dias eh %i a de meses eh %i a de anos eh %i", compdia,compmes, compano);

    for(n=0;n<mmaior;n++){
        i=i+diasmes[n];
    }

    for(m=0;m<mmenor;m++){
        j=j+diasmes[m];
    }

    diasnosmeses=i-j;
    diasnosanos=365*compano;

    totaldedias=diasnosanos+diasnosmeses+compdia;

    //printf("dias nos meses %i dias nos anos %i valor do i %i\n",diasnosmeses,diasnosanos,j);

    printf("o total de dias entre as duas datas eh %i", totaldedias);





  //  printf("o dia maior eh %i e o dia menor eh %i", compdia, dmenor);



}
