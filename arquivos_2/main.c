#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


    FILE *fp;
int pulalinha(){
    int a;
    char str[30];
    printf("insira uma frase com ate 30 caracteres\n");
    gets(str);



    for(a=0;a<30;a++){
            if(str[a]=='\0')
            break;
        if(str[a]==' '){
            printf("\n");
            putc('\n',fp);
        }
        else{
            putc(str[a],fp);
            printf("%c",str[a]);
        }
    }
}

int main(void)
{
    setlocale(LC_ALL, "");
 char nome[40];
  printf("Digite o nome do arquivo de no maximo 40 caracteres\n");
 gets(nome);

  strcat(nome, ".txt");
  fp = fopen(nome, "wt");
  pulalinha();
  printf("\n\nFeito por Renan Lemes");
  fclose(fp);
}
