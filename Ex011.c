#include <stdio.h>
#include <locale.h>


/*
Escreva um programa que escreva no ecrã toda tabela ASCII (0 - 255 chars), escrevendo em cada linha
o código ASCII e o caracter correspondente.

EXEMPLO:

...
65 --> A
66 --> B
67 --> C
...

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int i, conta;
    char opcao;

    for(i=0, conta=1; i<=255; i++){
        printf("%3i --> %c\n", i, (char)i);
        if(conta==20){
            do{
                printf("Aperte 'C' ou 'c' para continuar! ");
                opcao = getchar();
            }while(opcao != 'c' && opcao != 'C');
            conta = 1;

        }else{
            conta++;

        }

    }

}
