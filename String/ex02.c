#include <stdio.h>
#include <string.h>

int main(){
    char st[50];

    printf("Digite um texto: ");
    fgets(st, sizeof(st), stdin);

    int cont = 0;
    while(cont<50){
        if(st[cont]=='\0' || st[cont]=='\n'){
            break;
        }
        cont++;
    }
    printf("O texto tem tamanho: %i", cont);

    return 0;
}