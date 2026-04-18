#include <stdio.h>
int main(){
    int soma=0;
    float media;
    for(int i = 15; i<101; i++){
         soma=soma+i;
    }
    media = (float)soma/75;
    printf("A média dos numeros no intervalo [15,100] é %.2f", media);
    return 1;
}