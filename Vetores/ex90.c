#include <stdio.h>
int main(){
    int v[30], cont=0, numero;
    printf("Lendo vetor:\n");
    for(int i = 0; i <30; i++){
        printf("\tDigite um número para o vetor: ");
        scanf("%i", &v[i]);
    }
    printf("\n\nDigite um número: ");
    scanf("%i",&numero);
    for(int i = 0; i <30; i++){
        if(v[i] == numero){
            cont++;
        }
    }
    printf("\nEsse número apareceu %i vezes", cont);

    return 1;
}