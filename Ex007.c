#include <stdio.h>
#include <locale.h>

/*
Implemente a seguinte função:

long int num(int n_horas, char tipo)

Semelhante à função anterior, só que recebe mais um parâmetro indicando  aquilo que
se quer saber 'h' - horas, 'm' - minutos e 's' - segundos

num(3, 'h') --> 3
num(3, 'm') --> 180
num(3, 's') --> 10800
*/

long int num(int n_horas, char tipo){
    char op;

    switch(op){
    case 'h':
        return (long) n_horas;
        break;
    case 'm':
        return (long) n_horas * 60;
        break;
    case 's':
        return (long) n_horas * 3600;

    }
}
void main(){
    char op;
    int n_horas;

    printf("Digite a opção que quer transformar: ");
    scanf("%c", &op);
    printf("Digite as(os) %c que quer transformar: ", op);
    scanf("%i", &n_horas);

    printf("%i horas equivalem à %i", n_horas, num(n_horas, op));
}
