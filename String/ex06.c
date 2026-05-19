#include <stdio.h>
#include <string.h>

int main(){

    char nome[50], sexo;
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("\nSexo (F) feminino ou (M) masculino? ");
    scanf(" %c", &sexo);

    printf("\nDigite sua idade: ");
    scanf("%i",&idade);
    char status[50];
    if(sexo == 'F' && idade < 25){
        printf("ACEITA");
    }else{
        printf("NÃO ACEITA");
    }
    

    return 0;
}