#include <stdio.h>
#include <locale.h>


/*
Escreva um programa que coloque no ecr� meia �rvore de natal com asteriscos.
O n�mero de ramos dever� ser introduzido pelo utilizador.

Exemplos com 3, 4, 5 ramos:

*       *       *
**      **      **
***     ***     ***
        ****    ****
                *****

*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    unsigned int ramos = 0, i, j;

    printf("\t\tGerando meia �rvore de Natal!!\n\n");
    printf("Com quantos ramos voc� quer a suameia �rvore? ");
    scanf("%u", &ramos);

    for(i=1; i<=ramos; i++){
            for(j=1; j<=i; j++)
        putchar('*');
    putchar('\n');
    }
}
