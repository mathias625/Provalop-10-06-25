#include <stdio.h>
#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa pessoa;
    
    printf("Digite o nome: ");
    scanf("%s", pessoa.nome);
    
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    
    return 0;
}