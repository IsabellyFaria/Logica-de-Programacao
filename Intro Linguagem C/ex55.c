#include <stdio.h>

int main(){
    //Variáveis
    int lados, medida, perimetro, area;
    //Entradas
    printf("Digite o número de lados do polígono: ");
    scanf("%d", &lados);

    printf("Digite a medida do lado: ");
    scanf("%d", &medida);

    //Processamento
    if (lados == 3){
        perimetro = 3 * medida;
        printf("Triangulo\n");
        printf("O perimetro do triângulo é: %d\n", perimetro);
    }
    else if (lados == 4){
        area = medida * medida;
        printf("Quadrado\n");
        printf("A área do quadrado é: %d\n", area);
    }
    else if (lados == 5){
        printf("Pentágono\n");
    }
    else{
        if(lados < 3){
            printf("Não é um polígono.\n");
        }
        else{
            printf("Polígono não identificado.\n");
        }
        printf("Número de lados inválido.\n");
    }

    return 1;
}