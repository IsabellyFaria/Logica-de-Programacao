#include <stdio.h>

int main() {
    //Variáveis
    float nota1, nota2, nota3, media;

    //Entradas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    //Processamento
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
    
    //Saída
    printf("A média é: %.2f\n", media);
    
    return 0;
}
