#include <stdio.h>

int main(){
    //Variáveis
    int a, b, c;

    //Entrada
    printf("Digite os tres angulos: ");
    scanf("%d %d %d", &a, &b, &c);

    //Processamento e saída
    if (a == 90 || b == 90 || c == 90){
        printf("Triangulo Retangulo\n");
    }
    else if (a > 90 || b > 90 || c > 90){
        printf("Triangulo Obtusangulo\n");
    }
    else {
        printf("Triangulo Acutangulo\n");
    }

    return 0;
}