#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

Produto produtos;

void cadastrarProduto();
void vizualizarInfoProduto();
void realizarCompra();

int main(){
    int opcao;
   
    printf("===== Supermercado SuperMais =====\n");
    printf("Selecione uma opção:\n");
    printf("1 - Cadastrar Produto\n");
    printf("2 - Vizualizar Informação do Produto\n");
    printf("3 - Realizar Compra\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);
   
do{
        switch(opcao){
        case 1:
        cadastrarProduto();
            break;
        case 2:
        vizualizarInfoProduto();
            break;
        case 3:
        realizarCompra();
            break;
        case 0:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inválida. Tente Novamente.\n");
            break;
      }
    }while (opcao != 0);

    return 0;
}

void cadastrarProduto() {
    printf("Cadastrar Produto:\n");
    printf("Nome do Produto: ");
    scanf("%s", produtos.nome);
    printf("Quantidade: ");
    scanf("%d", &produtos.quantidade);
    printf("Preço: ");
    scanf("%f", &produtos.preco);
}

void vizualizarInfoProduto() {
    printf("Vizualizar Informações do Produto:");
    for(int i = 0; i < 1; i++) {
        printf("Nome do Produto: %s\n", produtos.nome);
        printf("Quantidade: %d\n", produtos.quantidade);
        printf("Preço : %f\n", produtos.preco);
    }
}

void realizarCompra() {
    int quantidade = 0;
    printf("Realizar Compra:\n");
    printf("Qual quantidade quer vender?: ");
    scanf("%d", &quantidade);
    for(int i = 0; i < quantidade; i++) {
        printf("Compra realizada!");
    }
}