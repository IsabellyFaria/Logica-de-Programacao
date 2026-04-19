#include <stdio.h>
int main(){
    int a[20];
    printf("Lendo vetor:");
    for(int i = 0; i<20; i++){
        printf("\n\tDigite um numero: ");
        scanf("%i",&a[i]);
    }

    printf("\nVetor ao contrário:");
    for(int i = 19; i != 0; i--){
        printf("\n\t%i",a[i]);
    }

    return 1;
}