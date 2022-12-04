#include <stdio.h>
#include <stdlib.h>


int tamanho(char str[]){
     int tamanho = 0;

     for(int a=0;a<255;a++){

        if(str[a]=='\0')
            break;
        tamanho++;
     }
  return tamanho;
}

void nova_linha(char str[]){
     for(int n = 0; n<tamanho(str); n++){
     if(str[n]== ' ')
        printf("\n");

    else
        printf("%c", str[n]);
     }
}



int main()
{
    char str[30];


    printf("insira uma string\n");
    gets(str);
    printf("sua string eh %s\n",str);
    nova_linha(str);
}
