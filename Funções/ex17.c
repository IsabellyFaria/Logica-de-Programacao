#include <stdio.h>
#include <string.h>
int valorRomano(char numero){
    switch (numero){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}
char* stringRomano(int n){
    static char romano[50];
    char valores[] = "IVXLCDM";
    int cont = 0;
    for(int i = 6; i >=0; i--){
        int caracter;
        caracter = valorRomano(valores[i]);
        int resto = n % caracter;
        if( resto != n){
            int valor = (n - resto)/caracter;
            n = resto;
            if(valor<=3 || i == 6){
                for(int j = 0; j < valor; j ++){
                    romano[cont]=valores[i];
                    cont++;
                }
            }else{
                    romano[cont] = valores[i];
                    cont++;
                    romano[cont] = valores[i+1];
                    cont++;
            }
        }
    }
    romano[cont] = '\0';
    return romano;
}



int main(){
    int n;
    

    printf("Digite um numero: ");
    scanf("%i", &n);

    char *resposta = stringRomano(n);
    printf("Esse número é %s\n", resposta);
}