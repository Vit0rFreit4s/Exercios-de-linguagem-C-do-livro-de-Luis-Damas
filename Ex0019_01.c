#include <stdio.h>
#include <locale.h>

/*
    Escreva um programa que indique o número de diasque um mês tem.
    (Fevereiro = 28 dias)

    *Usando apenas a instrução de teste if-else!!
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int mes;

    printf("Digite o número correspondente do mês que você quer saber quantos dias possue: ");
    scanf("%i", &mes);

    if(mes==1){
        printf("\nJaneiro tem 31 dias.");
    }
     else if(mes==2){
        printf("\nFevereiro tem 28 dias.");
     }
     else if(mes==3){
        printf("\nMarço tem 31 dias.");
     }
     else if(mes==4){
        printf("\nAbril tem 30 dias.");
     }
     else if(mes==5){
        printf("\nMaio tem 31 dias.");
     }
     else if(mes==6){
        printf("\nJunho tem 30 dias.");
     }
     else if(mes==7){
        printf("\nJulho tem 31 dias.");
     }
     else if(mes==8){
        printf("\nAgosto tem 31 dias.");
     }
     else if(mes==9){
        printf("\nSetembro tem 30 dias.");
     }
     else if(mes==10){
        printf("\nOutubro tem 31 dias.");
     }
     else if(mes==11){
        printf("\nNovembro tem 30 dias.");
     }
     else if(mes==12){
        printf("\nDezembro tem 31 dias.");
     }
     else{
        printf("\nNúmero inválido.");
    }


}
