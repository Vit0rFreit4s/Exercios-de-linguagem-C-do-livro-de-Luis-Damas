#include <stdio.h>
#include <locale.h>

/*
    Reescreva o programa anterior com um switch
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("Digite um n�mero inteiro: ");
    scanf("%i", &n);

    switch(n){
    case 0:
        printf("Voc� digitou  o n�mero '0'.\n");
        break;
    default:
        printf("Esse n�mero � diferente de '0'.\n");
    }
}
