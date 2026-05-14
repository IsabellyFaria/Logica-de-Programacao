#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome,sizeof(nome),stdin);

    if(nome[0] == 65 || nome[0] == 97){
        printf("%s",nome);
    }


    return 0;
}