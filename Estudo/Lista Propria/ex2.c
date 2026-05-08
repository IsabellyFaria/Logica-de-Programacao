#include <stdio.h>
int main(){
    int n;
    printf("Digite o tamanho da sequencia: ");
    scanf("%i",&n);

    int lista[n];
    for(int i = 0; i < n; i++){
        printf("Digite o %iº numero: ", i+1);
        scanf("%i",&lista[i]);
    }
    
    int posicao = -1, tamanho = 0, cont=0, tamanhoMaior = 0, posicaoReal = 0;

    while(cont+1<n){
        if(lista[cont]>lista[cont+1]){
            cont++;
        }else{
            posicao = cont;
            tamanho = 2;
            cont++;
            while(lista[cont]<lista[cont+1] && cont+1 < n){
                cont++;
                tamanho++;
            }
            

            if(tamanho > tamanhoMaior){
                tamanhoMaior = tamanho;
                posicaoReal = posicao;
                
            }
        }
    }
    if(tamanhoMaior != 0){
        printf("Tamanho: %i\nInicio: %i", tamanhoMaior, posicaoReal);
    }
    
    return 0;
}