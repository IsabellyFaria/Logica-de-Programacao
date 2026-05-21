#include <stdio.h>

float celcius(int f){
    return (5*((float)f-32))/9;
}
int main(){
    printf("********** TABELA DE CONVERSÂO **********");
    printf("\n***     ºC         ***       ºF        ***");
    for(int i = 50; i<151;i++){
        printf("\n***    %.2f ºC    ***     %i ºF       ***",celcius(i),i);
    }
}