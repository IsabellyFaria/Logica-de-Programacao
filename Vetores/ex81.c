#include <stdio.h>
int main(){
    float Q[20],menor, n;
    int posicao = 0;

    printf("Leitura do vetor:\n");
    for(int i = 0; i < 20;i++){
        n = -1;
        while(n < 0){
            printf("\n\tDigite o %iº numero (apenas positivos): ",i+1);
            scanf("%f",&n);
        }
        Q[i] = n;
        if(n < menor || i == 0){
            menor = n;
            posicao = i;
        }
    }
    printf("O menor numero é %.2f, na posição %i", menor, posicao);
    return 1;
}