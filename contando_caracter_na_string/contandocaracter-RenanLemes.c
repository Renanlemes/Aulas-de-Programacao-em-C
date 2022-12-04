#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[100];
    char c;
    int n, a;

    printf("insira uma frase\n");
    gets(frase);
    printf("essa eh a sua frase: %s\n",frase);
    printf("insira o seu caracter\n");
    scanf("%c",&c);

    n=0;

    for(a=0; a<100; a++){
        if(frase[a]==c){
            n++;
        }
        else if(frase[a]=='\0')
        break;

    }
    printf("o numero de vezes caraceter escolhido aparece na frase eh: %i\n",n);


    return 0;
}
