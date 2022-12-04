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
   void string_inv(char str[]){
     int strlen = tamanho(str);
     for(int n = 0; n<strlen / 2; n++){
        char temp = str[n];
        str[n] = str[strlen - n - 1];
    str[strlen - n - 1] = temp;
     }
     printf("sua string invertida eh %s\n\n", str);
   }


int main()
{
   char str[50];
printf("insira uma string\n");
gets(str);
printf("sua string eh %s\n\n", str);
string_inv(str);
}



