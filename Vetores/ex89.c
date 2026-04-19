#include <stdio.h>
int main(){
    int v1[15], v2[15], cont=0;

    printf("Lendo primeiro vetor:\n");
    for(int i = 0; i < 15; i++){
        printf("\tDigite um numero para o vetor: ");
        scanf("%i",&v1[i]);
    }
    printf("Lendo segundo vetor:\n");
    for(int i = 0; i < 15; i++){
        printf("\tDigite um numero para o vetor: ");
        scanf("%i",&v2[i]);
    }
    for(int i = 0; i < 15; i++){
        if(v1[i] == v2[i]){
            cont++;
        }
    }
    printf("\nO número de vezes que os vetores tiveram o mesmo numero na mesma posição foi %i",cont);

    return 1;
}