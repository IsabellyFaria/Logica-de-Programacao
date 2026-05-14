#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome,sizeof(nome),stdin);

    for(int i = 0; i < 4; i++){
        printf("%c",nome[i]);
    }

    return 0;
}