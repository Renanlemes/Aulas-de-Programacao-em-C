#include <stdio.h>
#include <stdlib.h>



void concatenamento(char str1[], char str2[]){
        printf("%s%s",str1,str2);
}


int tamanho(char str[]){
     int tamanho = 0;

     for(int a=0;a<255;a++){

        if(str[a]=='\0')
            break;
        tamanho++;
     }
  return tamanho;
}


int main()
{
    char str1[50];
    char str2[50];
    int a,i=0,n,conc, nc;

    printf("insira a primeira string\n");
    gets(str1);
    printf("insira a segunda string\n");
    gets(str2);
    printf("essa eh sua primeira string: %s\n",str1);
    printf("essa eh sua segunda string: %s\n",str2);

    int tamanho1 = tamanho(str1);

    int tamanho2=tamanho(str2);

      for(a=0;a<=tamanho1;a++){

     if(str1[a]=='\0'){

        if(tamanho2>tamanho1){
            i=1;
            break;
        }
     }

        if(str1[a]<str2[a]){
            i=1;
             break;}
        else if(str1[a]>str2[a]){
           i=2;
             break;
        }
      }
      switch(i){
      case 0:
        printf("as strings sao iguais\n");
        break;

      case 1:
        printf("a segunda string eh maior\n");
        break;

      case 2:
        printf("a primeira string eh maior\n");
        break;

      }


       concatenamento(str1,str2);
       printf("o valor de i eh %i",i);

    }






