#include <stdio.h>
#include <locale.h>


/*
Escreva um programa que solicite um n�mero ao utilizador at� que o valor deste esteja entre os valores 1 e 100.



*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num = 0;

    do{
        printf("Introduza um numero: ");
        scanf("%i", &num);
    }while(num < 1 || num > 100);
    printf("O n�mero introduzido foi %i.", num);
}
