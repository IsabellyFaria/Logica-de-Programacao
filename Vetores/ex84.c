#include <stdio.h>
int main(){
    int n;
    
    printf("Digite o tamanho dos vetores: ");
    scanf("%i", &n);

    int a[n], b[n], soma[n];

    printf("Leitura do primeiro vetor:\n");
    for(int i = 0; i<n;i++){
        printf("\tDigite o %iº numéro: ", i+1);
        scanf("%i",&a[i]);
    }
    printf("Leitura do segundo vetor:\n");
    for(int i = 0; i<n;i++){
        printf("\tDigite o %iº numéro: ", i+1);
        scanf("%i",&b[i]);
    }
    for(int i = 0; i<n;i++){
        soma[i] = a[i]+b[i];
    }

    printf("Exibição da soma dos itens:\n");
    for(int i = 0; i<n;i++){
        printf("\t%i\n", soma[i]);
    }

    return 1;
}