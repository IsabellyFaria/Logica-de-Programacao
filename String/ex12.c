#include <stdio.h>
#include <string.h>

int main(){
    char s[50], sub=0;
    char *vogais = "aeiouAEIOU";
    int cont = 0;

    printf("Digite palavra: ");
    fgets(s, sizeof(s), stdin);

    while(sub<65 || sub > 122){
        printf("Digite uma letra para substituir as vogais: ");
        scanf(" %c", sub);
    }
    int tamanho = strlen(s);
    for(int i = 0; i < tamanho; i++){
        
    }


    return 0;
}