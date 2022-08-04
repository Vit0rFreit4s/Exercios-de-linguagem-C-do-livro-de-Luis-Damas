#include <stdio.h>
#include <locale.h>


/*
Escreva um programa que solicite ao utilizador 2 n�meros inteiros entre 0 e 255 e escreva
no ecr�, todos os caracteres da tabela ASCII, cujo os c�digos variam entre os dois n�meros
introduzidos, escrevendo em cada linha o c�digo ASCII e o caracter correspondente.

EXEMPLO:

N� 65 e 120     N� 120 e 65
65 --> A        65 --> A
66 --> B        66 --> B
67 --> C        67 --> C
...             ...

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    printf("Introduza o 1� n�mero: ");
    scanf("%i", &n1);
    printf("Introduza o 2� n�mero: ");
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
        printf("\nOs n�meros s�o iguais!");
    }
}
