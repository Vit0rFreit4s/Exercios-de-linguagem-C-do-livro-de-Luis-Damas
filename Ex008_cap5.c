#include <stdio.h>
#include <locale.h>

/*
Implemente a seguinte função:

float Max(float x, float y, float z)

Devolve o maior dos valor x, y e z
*/

float Max(float x, float y, float z){

    if(x > y){
        if(y > z){
            return x;
        }
        else{
            return z;
        }
    }else{
        if(y > z){
            return y;
        }
        else{
            return z;
        }
    }
}

main(){
    int i = 1;
    int num;

    /*printf("Digite 3 números que vou falar o maior!!");

    for(i = 1; i <= 3; i++){
        printf("Digite o %i número: ", i);
        scanf("%i", &num);
    }

    printf("O maior número é %f", )
    */

    Max(2.0, 3.0, 7.0);
}
