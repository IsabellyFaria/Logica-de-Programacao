#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome,"\n")] = '\0';
    int len;
    len = strlen(nome);

    printf("A string tem tamanho %i", len);

    return 0;
}