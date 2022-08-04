#include <stdio.h>
#include <locale.h>

/*
    Escreva um programa, de 4 formas distintas,
    que leia um inteiro e indique se esse inteiro é ou não igual a zero.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("Digite um número inteiro: ");
    scanf("%i", &n);

    if(n == 0){
        printf("Você digitou  o número '0'.\n");
    }else{
        printf("Esse número é diferente de '0'.\n");
    }

}
