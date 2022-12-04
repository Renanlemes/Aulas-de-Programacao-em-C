#include <stdio.h>
#include <string.h>
struct aluno{
    char nome[100];
    unsigned int matricula;
    float notap1;
    float notap2;
    float notap3;
    float media;
    }aluno[20];

void resultado(int num){
    int a;
    float media,soma;

    for(a=0;a<num;a++){

             soma=aluno[a].notap1+aluno[a].notap2+aluno[a].notap3;
    media=soma/3;

        printf("nome: %s\n",aluno[a].nome);
        printf("media: %.2f\n",media);

        if(media>5)
            printf("aprovado\n\n");
        else
            printf("reprovado\n\n");


    }
}

void maioresnotas(int num){
    int a,b;
    unsigned int matriculap1,matriculap2,matriculap3;
    float maior1=0.0, menor1=10.0,maior2=0.0, menor2=10.0,maior3=0.0, menor3=10.0;
    char nomep1[100],nomep2[100],nomep3[100];

    for(a=0;a<num;a++){
        if(aluno[a].notap1>maior1)
            maior1=aluno[a].notap1;
        if(aluno[a].notap2>maior2)
            maior2=aluno[a].notap2;
        if(aluno[a].notap3>maior3)
            maior3=aluno[a].notap3;
        if(aluno[a].notap1<menor1)
            menor1=aluno[a].notap1;
        if(aluno[a].notap2<menor2)
            menor2=aluno[a].notap2;
        if(aluno[a].notap3<menor3)
            menor3=aluno[a].notap3;
    }
    for(a=0;a<num;a++){
        if(aluno[a].notap1==maior1){
            printf("o aluno com a maior nota na primeira prova eh %s\n",aluno[a].nome);
            printf("a matricula do trabalhador eh %i\n",aluno[a].matricula);
            printf("a nota do trabalhador eh %.2f\n\n",aluno[a].notap1);
        }
        if(aluno[a].notap2==maior2){
           printf("o aluno com a maior nota na segunda prova eh %s\n",aluno[a].nome);
           printf("a matricula do trabalhador eh %i\n",aluno[a].matricula);
           printf("a nota do trabalhador eh %.2f\n\n",aluno[a].notap2);
        }
        if(aluno[a].notap3==maior3){
            printf("o aluno com a maior nota na terceira prova eh %s\n",aluno[a].nome);
            printf("a matricula do trabalhador eh %i\n",aluno[a].matricula);
            printf("a nota do trabalhador eh %.2f\n\n",aluno[a].notap3);

        }


        }

    }







   /* printf("nome do aluno com a maior nota na primeira prova: %s\n",nomep1);
    printf("numero de matricula do aluno com a maior nota na primeira prova: %i\n",matriculap1);
    printf("maior nota na primeira prova: %f\n",maior1);
    printf("nome do aluno com a maior nota na segunda prova: %s\n",nomep2);
    printf("numero de matricula do aluno com a maior nota na segunda prova: %i\n",matriculap2);
    printf("maior nota na segunda prova: %f\n",maior2);
    printf("nome do aluno com a maior nota na terceira prova: %s\n",nomep3);
    printf("numero de matricula do aluno com a maior nota na terceira prova: %i\n",matriculap3);
   */ //printf("maior nota na terceira prova: %f\n",maior3);


void menormedia(int num){
    float media,soma,menor1=10.0,nota1,nota2,nota3;
    char nome[100];
    int a;

    for(a=0;a<num;a++){
            soma=aluno[a].notap1+aluno[a].notap2+aluno[a].notap3;
    media=soma/3;

        if(media<menor1){
            menor1=media;
            strcpy(nome,aluno[a].nome);
            nota1=aluno[a].notap1;
            nota2=aluno[a].notap2;
            nota3=aluno[a].notap3;

    }
    }
     for(a=0;a<num;a++){
            soma=aluno[a].notap1+aluno[a].notap2+aluno[a].notap3;
    media=soma/3;
        if(media==menor1){
            printf("o aluno com a menor media eh %s\n",aluno[a].nome);
            printf("a sua media eh %.2f\n",menor1);
            printf("as suas notas na primeira, segunda e terceira prova sao respectivamente %.2f, %.2f e %.2f\n\n",aluno[a].notap1,aluno[a].notap2,aluno[a].notap3);
        }
    }
}



void maiormedia(int num){
    float media,soma,maior1=0.0,nota1,nota2,nota3;
    char nome[100];
    int a;

    for(a=0;a<num;a++){
            soma=aluno[a].notap1+aluno[a].notap2+aluno[a].notap3;
            media=soma/3;
        if(media>maior1){
            maior1=media;

    }
    }
    for(a=0;a<num;a++){
            soma=aluno[a].notap1+aluno[a].notap2+aluno[a].notap3;
    media=soma/3;
        if(media==maior1){
            printf("o aluno com a maior media eh %s\n",aluno[a].nome);
            printf("a sua media eh %f",maior1);
            printf("as suas notas na primeira, segunda e terceira prova sao respectivamente %.2f, %.2f e %.2f\n\n",aluno[a].notap1,aluno[a].notap2,aluno[a].notap3);
        }
    }
}


int main()
{
    int num, a;

    printf("insira um numero de alunos\n");
    scanf("%i", &num);

    for(a=0;a<num;a++){
            fflush(stdin);
            printf("\ninsira o nome do aluno\n");
            scanf("%s",aluno[a].nome);
            fflush(stdin);
            printf("\ninsira o numero de matricula\n");
            scanf("%i",&aluno[a].matricula);
            fflush(stdin);
            printf("\ninsira a nota da primeira prova\n");
            scanf("%f",&aluno[a].notap1);
            fflush(stdin);
            printf("\ninsira a nota da segunda prova\n");
            scanf("%f",&aluno[a].notap2);
            fflush(stdin);
            printf("\ninsira a nota da terceira prova\n");
            scanf("%f",&aluno[a].notap3);
            fflush(stdin);
    }
     maioresnotas(num);
     maiormedia(num);
     menormedia(num);
     resultado(num);

}
