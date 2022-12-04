#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


    FILE *fp;

int loucurada(){
    char ch[80], ch2[80], ch1[27];
    int a, b, c,e,f,g,h=0,numletra,ch3[27];

    printf("insira uma frase\n");
    gets(ch);
        for(a=0;ch[a]!='\0';a++){
    //        printf("%c",ch[a]);
            putc(ch[a],fp);
    }
      putc('\n\n',fp);
       putc('\n\n',fp);
  //  printf("\n\n");
    for(b=a;0<=b;b--){
    //     printf("%c",ch[b]);
         putc(ch[b],fp);

    }
  //  printf("\n\n");
    putc('\n\n',fp);
      putc('\n\n',fp);
     for(a=0;a<80;a++){
            if(ch[a]=='\0')
            break;
        if(ch[a]==' '){
          //  printf("\n");
            putc('\n',fp);
        }
        else{

        //    printf("%c",ch[a]);
            putc(ch[a],fp);
        }
    }
   // printf("\n\n");
    putc('\n\n',fp);
      putc('\n\n',fp);
    for(a=0;ch[a]!='\0';a++){
            if(ch[a]!=' '){
    //        printf("%c",ch[a]);
            putc(ch[a],fp);
      //      printf("\n");
            putc('\n',fp);
            }

    }
  //  printf("\n\n");
    putc('\n\n',fp);
  for (e = 0; e < 27; e++)
  {
    ch1[e] = '0';
    ch3[e] = 0;
  }
    for (f = 0; ch[f] != '\0'; f++)
  {
      if(ch[f]==' ')
        continue;

    int numletra=0;

    for(g=0;g<h;g++){
        if(ch1[g]==ch[f]){
            numletra=1;
            ch3[g]++;
            break;
        }
    }
    if(!numletra){
        ch1[h]=ch[f];
        ch3[h]=1;
        h++;
    }
    }

  for (int f = 0; f < h ; f++){
  //  printf("O caractere %c apareceu %i vezes\n", ch1[f], ch3[f]);
    fprintf(fp, "O caractere %c apareceu %i vezes\n", ch1[f], ch3[f]);
  }

     char n;
     fclose(fp);
     fp=fopen("string.tx_","rt");

  do
  {
    n = fgetc(fp);
    printf("%c", n);
  } while (n != EOF);



  }


int main(void)
{
    setlocale(LC_ALL, "");

  fp = fopen("string.tx_","w+t");
  loucurada();
  printf("\n\n Feito por Renan Lemes");

  fclose(fp);

}
