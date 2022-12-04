#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, count = 1, j, f, i;

    num=15;

    while(count <= num)

     {
        i = 0;
        while(i <= (num - count) )

        {
            printf(" ");
            i++;
        }
        i = 0;
        while(i < (2*count-1))
        {
            printf("*");
            i++;
        }
        printf("\n");
        count++;
}
        j=0;
        f=0;
  /*     while(j<11){

        j++;
        printf(" ");
        }
        while(j<20){

                j++;
            printf("*");
        }
*/
        while(j<=5){
            printf("           *********");
            printf("\n");
            j++;
        }
        printf("Renan Lemes");
}
