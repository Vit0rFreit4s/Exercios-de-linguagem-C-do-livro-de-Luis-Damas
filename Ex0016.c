#include <stdio.h>
#include <locale.h>

/*
    Escreva um programa, de 4 formas distintas,
    que leia um inteiro e indique se esse inteiro � ou n�o igual a zero.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("Digite um n�mero inteiro: ");
    scanf("%i", &n);

    if(n == 0){
        printf("Voc� digitou  o n�mero '0'.\n");
    }else{
        printf("Esse n�mero � diferente de '0'.\n");
    }

}
