#include <stdio.h>
#include <string.h>

void arruma(s[]){
    int len = strlen()
}

int palindromo(char s[]){
    int len = strlen(s);
    if(s[len-1] == '\n'){
        s[len-1] = '\0';
        len--;
    }
    
    int inicio = 0, fim = len-1;
    while(inicio<fim){
        if(s[inicio] != s[fim]){
            return 0;
        }
        inicio++;
        fim--;
    }
    
    return 1;
    
    return 0;
}
int main(){
    char s[50];
    int r;
    printf("Digite uma frase: ");
    fgets(s, sizeof(s),stdin);

    r = palindromo(s);

    printf("\n%i",r);

    return 0;
}