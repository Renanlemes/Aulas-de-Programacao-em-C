#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;



    for (i = 1; i<15 ; i++ )
    {
       for (j = 1 ; j < 2*15-1 ; j++)
       {
    if(j >= 15-(i-1) &&  j <= 15+(i-1))
        {
        printf("*");
        }
        else
        printf(" ");

    }

    printf ("\n");
    }

    for ( k = 0; k< 5 ; k++ ){
        printf ("          *********\n");
    }
    printf("Renan Lemes");
    return 0;
}
