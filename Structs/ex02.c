#include <stdio.h>
#include <string.h>

//Structs
typedef struct{
    char rua[50];
    char bairro[50];
    int numero;
    char complemento[50];
    char cidade[50];
    char UF[2];

}Endereco;
typedef struct
{
    char nome[100];
    int idade;
    Endereco endereco;
}Pessoa;

//Funções
Endereco getEndereco();
Pessoa getPessoa();
void imprimePessoa(Pessoa p);

//Main
int main(){
    Pessoa pessoa = getPessoa();

    imprimePessoa(pessoa);

    return 0;
}
void getString(char local[], int tamanho){
    fgets(local, tamanho, stdin);
    local[strcspn(local, "\n")] = '\0';
}

//Desenvolvimento das Funções
Pessoa getPessoa(){
    Pessoa pessoa;
    
    printf("\nDigite o nome: ");
    getString(pessoa.nome, sizeof(pessoa.nome));
    printf("\nDigite a idade");
    scanf("%d", &pessoa.idade);
    getchar();
    
    pessoa.endereco = getEndereco();
    return pessoa;
}
Endereco getEndereco(){
    Endereco endereco;

    printf("\nDigite a rua: ");
    getString(endereco.rua, sizeof(endereco.rua));

    printf("\nDigite o bairro: ");
    getString(endereco.bairro, sizeof(endereco.bairro));

    printf("\nDigite o numero: ");
    scanf("%d", &endereco.numero);
    getchar(); // remove o '\n' do scanf

    printf("\nDigite o complemento: ");
    getString(endereco.complemento, sizeof(endereco.complemento));

    printf("\nDigite a cidade: ");
    getString(endereco.cidade, sizeof(endereco.cidade));

    printf("\nDigite a UF: ");
    getString(endereco.UF, sizeof(endereco.UF));

    return endereco;
}
void imprimePessoa(Pessoa p){
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);

    printf("\nEndereco:\n");
    printf("Rua: %s\n", p.endereco.rua);
    printf("Numero: %d\n", p.endereco.numero);
    printf("Complemento: %s\n", p.endereco.complemento);
    printf("Bairro: %s\n", p.endereco.bairro);
    printf("Cidade: %s\n", p.endereco.cidade);
    printf("UF: %s\n", p.endereco.UF);
}