#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    int cont = 0;

    printf("Digite um texto: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; i < strlen(s); i++){
        if(s[i]==49){
            cont++;
        }
    }
    printf("O caractere '1' aparece %i vezes",cont);

    return 0;
}