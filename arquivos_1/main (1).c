#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


    FILE *fp;
int inverte (){
        setlocale(LC_ALL, "");
    char ch[150];
    int a,b,c,d=0;
    printf("insira uma frase \n");
    gets(ch);
    for(a=0;ch[a]!='\0';a++){
        b++;
    }
    for(b=a;0<=b;b--){
        putc(ch[b],fp);
        printf("%c",ch[b]);
    }

 printf("\n\nfeito por Renan Lemes");
}



int main(void)
{

 char nome[40];
  printf("Digite o nome do arquivo, maximo de 40 caracteres\n");
 gets(nome);

  strcat(nome, ".txt");
  fp = fopen(nome, "wt");
  inverte();
  fclose(fp);
}
