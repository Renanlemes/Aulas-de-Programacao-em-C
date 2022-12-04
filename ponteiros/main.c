#include <stdio.h>
#include <stdlib.h>

int ordena(int*n1,int*n2,int*n3,char ordem){
       int x,y,c;
       x=0;
       y=0;

    //   int vet[]={*n1,*n2,*n3};
       switch(ordem){
       case'C':
       case 'c':
        if(*n1>*n2){
            c=*n1;
            *n1=*n2;
            *n2=c;
        }
        if(*n2>*n3){
            c=*n2;
            *n2=*n3;
            *n3=c;
        }
         if(*n1>*n2){
            c=*n1;
            *n1=*n2;
            *n2=c;
        }
        break;
       case 'D':
       case 'd':
         if(*n1<*n2){
            c=*n1;
            *n1=*n2;
            *n2=c;
        }
        if(*n2<*n3){
            c=*n2;
            *n2=*n3;
            *n3=c;
        }
         if(*n1<*n2){
            c=*n1;
            *n1=*n2;
            *n2=c;
        }

        break;
       default:
        printf("a ordem deve ser representada com a letra c ou d\n\n");
       }


       return 0;
}


int main()
{

   int *n1,*n2,*n3;
   char ordem;
 printf("coloque a ordem\n\n");
       scanf("%c",&ordem);

    printf("coloque o valor de n1, n2 e n3\n\n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);
    ordena(&n1,&n2,&n3,ordem);
    printf("os valores na ordem escolhida sao: %i, %i, %i ",*n1,*n2,*n3);
    return 0;
}










