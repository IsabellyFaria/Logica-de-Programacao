#include <stdio.h>
int main(){
    float Q[20],maior=0,n;
    int posicao = 0;

    printf("Leitura do vetor:\n");
    for(int i = 0; i < 20;i++){
        n = -1;
        while(n < 0){
            printf("\n\tDigite o %iº numero (apenas positivos): ",i+1);
            scanf("%f",&n);
        }
        Q[i] = n;
        if(n>maior){
            maior = n;
            posicao = i;
        }
    }
    printf("O maior numero é %.2f, na posição %i", maior, posicao);
    return 1;
}