#include <stdio.h>
#include <locale.h>

/*
    Escreva um programa que verifique se um ano é bissexto ou não.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano;

    printf("Digite um ano: ");
    scanf("%i", &ano);

    if((ano%4==0 && ano%100!=0) || (ano%4==0 && ano%100==0 && ano%400==0)){
        printf("É um ano Bissexto!");
    }else{
        printf("Não é um ano bissexto!");
    }

}
