#include <stdio.h>
#include <locale.h>

/*
Implemente a seguinte fun��o:

long int n_segundos(int n_horas)

devolve o n� de segundos que em um conjunto de horas tem:

n_segundos(0) --> 0
n_segundos(1) --> 3600
n_segundos(2) --> 7200
*/

long int n_segundos(int n_horas){


    return (long) n_horas * 3600;

}
void main(){
    int horas;

    printf("Digite o n�mero de horas que quer transformar: ");
    scanf("%i", &horas);

    printf("%i horas equivalem � %i segundo", horas, n_segundos(horas));
}
