#include <stdio.h>
int main(){
    int n;
    printf("Digite o numero de linhas e colunas: ");
    scanf("%i", &n);

    int vetor[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            printf(" ");
            scanf("%i", &vetor[i][j]);
        }
        printf("\n");
    }
    
    int somaDP = 0, somaDS = 0, somaADP = 0, somaADS = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                somaDP = somaDP + vetor[i][j];
            }else{
                if(j == n-i){
                    somaDS = somaDS + vetor[i][j];
                }else{
                    if(j > i){
                        somaADP = somaADP + vetor[i][j];
                    }else{
                        if(j < n-i){
                            somaADS = somaADS + vetor[i][j];
                        }
                    }
                }
            }
        }
    }
    printf("Soma Diagonal Principal: %i\nSoma Diagonal Secundária: %i\nSoma Acima da Diagonal Principal: %i\nSoma Acima da Diagonal Secundária: %i", somaDP, somaDS, somaADP, somaADS);

    return 0;
}