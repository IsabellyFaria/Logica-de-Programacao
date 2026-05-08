#include <stdio.h>

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    while(n<0 || n>100){
        printf("Numero inválido, digite um inteiro menor que 100");
        scanf("%i", &n);
    }

    int vetor[n], cont=0;
    int resposta[n],contem=0;
    while(cont<n){
        printf("\tDigite o %iº número do vetor: ",cont+1);
        scanf("%i", &vetor[cont]);
        cont++;
    }
    cont=0;
    for(int i = 0; i < n; i ++){
        contem = 0;
        for(int j = 0; j < cont; j ++){
            if(vetor[i]==resposta[j]){
                contem = 1; 
                break;
            }
        }
        if(contem == 0){
            resposta[cont] = vetor[i];
            cont++;
        }
    }
    
    for(int i = 0; i < cont; i ++){
        printf(" %i ", resposta[i]);
    }
    return 0;
}