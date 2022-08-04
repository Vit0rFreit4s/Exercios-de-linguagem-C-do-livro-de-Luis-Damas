#include <stdio.h>
#include <locale.h>

/*
Implemente a seguinte função:

float Val(float x, int n, float t)

devolve o Val (Valor Atual Líquido) para n anos, à taxa t e é definido através da seguinte fórmula:

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
