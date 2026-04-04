#include <stdio.h>

int main()
{
    // Variáveis
    float nota1, nota2, notaOptativa;
    // Entrada
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a nota optativa (Caso não tenha realizado a prova, digite -1): ");
    scanf("%f", &notaOptativa);

    // Processamento
    if (notaOptativa != -1)
    {
        if (nota1 < nota2)
        {
            nota1 = notaOptativa;
        }
        else
        {
            nota2 = notaOptativa;
        }
    }
    float media = (nota1 + nota2) / 2;
    
    // Saída
    printf("A média final é: %.2f\n", media);
    return 1;
}