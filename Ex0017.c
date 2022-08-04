#include <stdio.h>
#include <locale.h>

/*
    Reescreva o programa anterior com um switch
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("Digite um número inteiro: ");
    scanf("%i", &n);

    switch(n){
    case 0:
        printf("Você digitou  o número '0'.\n");
        break;
    default:
        printf("Esse número é diferente de '0'.\n");
    }
}
