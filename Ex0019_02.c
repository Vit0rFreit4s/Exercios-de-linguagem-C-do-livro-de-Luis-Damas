#include <stdio.h>
#include <locale.h>

/*
    Escreva um programa que indique o n�mero de diasque um m�s tem.
    (Fevereiro = 28 dias)

    *Usando switch!!
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
     int mes;

    printf("Digite o n�mero correspondente do m�s que voc� quer saber quantos dias possue: ");
    scanf("%i", &mes);

    switch(mes){
    case 1:
        printf("\nJaneiro tem 31 dias.");
        break;
    case 2:
        printf("\nFevereiro tem 28 dias.");
        break;
    case 3:
        printf("\nMar�o tem 31 dias.");
        break;
    case 4:
        printf("\nAbril tem 30 dias.");
        break;
    case 5:
        printf("\nMaio tem 31 dias.");
        break;
    case 6:
        printf("\nJunho tem 30 dias.");
        break;
    case 7:
        printf("\nJulho tem 31 dias.");
        break;
    case 8:
        printf("\nAgosto tem 31 dias.");
        break;
    case 9:
        printf("\nSetembro tem 30 dias.");
        break;
    case 10:
        printf("\nOutubro tem 31 dias.");
        break;
    case 11:
        printf("\nNovembro tem 30 dias.");
        break;
    case 12:
        printf("\nDezembro tem 31 dias.");
        break;
    default:
        printf("\nN�mero inv�lido.");
    }

}
