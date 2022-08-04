#include <stdio.h>
#include <locale.h>


/*
Escreva um programa que solicite ao utilizador 2 números inteiros entre 0 e 255 e escreva
no ecrã, todos os caracteres da tabela ASCII, cujo os códigos variam entre os dois números
introduzidos, escrevendo em cada linha o código ASCII e o caracter correspondente.

EXEMPLO:

Nº 65 e 120     Nº 120 e 65
65 --> A        65 --> A
66 --> B        66 --> B
67 --> C        67 --> C
...             ...

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    printf("Introduza o 1º número: ");
    scanf("%i", &n1);
    printf("Introduza o 2º número: ");
    scanf("%i", &n2);

    if(n1 > n2){
        do{
            printf("%3i --> %c\n", n2, (char)n2);
            n2++;
        }while(n1 >= n2);
    }
    else if(n1 < n2){
        do{
            printf("%3i --> %c\n", n1, (char)n1);
            n1++;
        }while(n1 <= n2);
    }else{
        printf("\nOs números são iguais!");
    }
}
