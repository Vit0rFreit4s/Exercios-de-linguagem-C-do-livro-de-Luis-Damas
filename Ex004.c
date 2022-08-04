#include <stdio.h>
#include <locale.h>

/*
Implemente a seguinte função:

int Abs(int x)

devolve o valor absoluto de x
Abs(-5) --> 5
Abs(5) --> 5
*/

int Abs(int x){
    if(x >= 0)
        return x;
    else
        return -x;
}
