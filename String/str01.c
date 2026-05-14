#include <stdio.h>

int main(){
    char nome[50];
    int cont = 0;
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    while(nome[cont]!='\0'){
        cont++;
    }

    nome[cont-1]='\0';

    printf("%s",nome);
}