#include <stdio.h>
#include <locale.h>

/*
    Escreva um programa que verifique se um ano � bissexto ou n�o.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano;

    printf("Digite um ano: ");
    scanf("%i", &ano);

    if((ano%4==0 && ano%100!=0) || (ano%4==0 && ano%100==0 && ano%400==0)){
        printf("� um ano Bissexto!");
    }else{
        printf("N�o � um ano bissexto!");
    }

}
