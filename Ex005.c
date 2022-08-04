#include <stdio.h>
#include <locale.h>

/*
Implemente a seguinte fun��o:

float Val(float x, int n, float t)

devolve o Val (Valor Atual L�quido) para n anos, � taxa t e � definido atrav�s da seguinte f�rmula:

val = x/(1+t) + x/(1+t)elevado a 2 ...
*/

float Val(float x, int n, float t){
    float res;
    int i;

    for(res=0, i=1; i<=n, i++){
        res = res + x/Pot(1+t,i);
    }
    return res;

}
