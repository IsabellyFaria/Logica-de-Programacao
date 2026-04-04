#include <stdio.h>

int main(){
    //Variáveis
    int eleitor,votoBranco, votoNulo, votoValido;
    float percentualBranco, percentualNulo, percentualValido;

    //Entrada
    printf("Digite o total de eleitores: \n\t");
    scanf("%i", &eleitor);

    printf("Digite a seguir o valor de votos:\n");
    
    printf("\t1. Brancos:  ");
    scanf("%i", &votoBranco);

    printf("\t2. Nulos:  ");
    scanf("%i",&votoNulo);

    printf("\t3. Válidos:  ");
    scanf("%i",&votoValido);

    //Processamento
        //Calculo dos percentuais
    percentualBranco = ((float)votoBranco/eleitor) * 100;
    percentualNulo = ((float)votoNulo/eleitor) * 100;
    percentualValido = ((float)votoValido/eleitor) * 100;

    //Saída
    printf("O percentual de votos foi:");
    printf("\n\t1. Votos Brancos: %.2f %%", percentualBranco);
    printf("\n\t2. Votos Nulos: %.2f %%", percentualNulo);
    printf("\n\t3. Votos Válidos: %.2f %%\n", percentualValido);
    return 1;
}