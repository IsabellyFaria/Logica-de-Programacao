#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    
    printf("Digite um texto: ");
    fgets(s, sizeof(s),stdin);

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '0'){
            s[i] = '1';
        }
    }

    printf("%s",s);

    return 0;
}