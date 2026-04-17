#include <stdio.h>
int main(){
    int negativos = 0, valor;
    for(int i=0; i <10; i++){
        printf("Digite um numero: ");
        scanf("%i",&valor);
        if(valor<0){
            negativos++;
        }
    }
    printf("Foram escritos %i números negativos\n", negativos);
    return 1;
}