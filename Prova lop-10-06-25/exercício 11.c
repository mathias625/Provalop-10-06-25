#include <stdio.h>
struct CD {
    char nomeBanda[30];
    int anoLancamento;
    char estilo[20];
    int quantidadeEstoque;
    float precoUnitario;
};
struct CD estoque[10];
int quantidadeCadastrada = 0;
void cadastrarCD() {
    printf("Nome da banda: ");
    scanf("%s", estoque[quantidadeCadastrada].nomeBanda);
    printf("Ano de lancamento: ");
    scanf("%d", &estoque[quantidadeCadastrada].anoLancamento);
    printf("Genero musical: ");
    scanf("%s", estoque[quantidadeCadastrada].estilo);
    printf("Quantidade em estoque: ");
    scanf("%d", &estoque[quantidadeCadastrada].quantidadeEstoque);
    printf("Preco unitario: ");
    scanf("%f", &estoque[quantidadeCadastrada].precoUnitario);
    quantidadeCadastrada++;
}
void venderCD() {
    char nomeBusca[30];
    int i, quantidadeVendida;
    printf("Nome da banda: ");
    scanf("%s", nomeBusca);
    for (i = 0; i < quantidadeCadastrada; i++) {
        if (nomeBusca[0] == estoque[i].nomeBanda[0]) {
            printf("Quantidade a vender: ");
            scanf("%d", &quantidadeVendida);

            if (estoque[i].quantidadeEstoque >= quantidadeVendida) {
                estoque[i].quantidadeEstoque -= quantidadeVendida;
                float total = quantidadeVendida * estoque[i].precoUnitario;
                printf("Compra realizada! Total: R$ %.2f\n", total);
            } else {
                printf("Estoque insuficiente!\n");
            }
            return;
        }
    }
    printf("CD nao encontrado.\n");
}
void consultarCD() {
    char nomeBusca[30];
    int i;
    printf("Nome da banda: ");
    scanf("%s", nomeBusca);

    for (i = 0; i < quantidadeCadastrada; i++) {
        if (nomeBusca[0] == estoque[i].nomeBanda[0]) {
            printf("CD: %s | Ano: %d | Genero: %s | Qtd: %d\n",
                   estoque[i].nomeBanda,
                   estoque[i].anoLancamento,
                   estoque[i].estilo,
                   estoque[i].quantidadeEstoque);
            if (estoque[i].quantidadeEstoque == 0) {
                printf("Sem unidades disponíveis.\n");
            }
            return;
        }
    }
    printf("CD nao encontrado.\n");
}
void buscarPorGenero() {
    char generoBusca[20];
    int i, achou = 0;
    printf("Genero musical: ");
    scanf("%s", generoBusca);

    for (i = 0; i < quantidadeCadastrada; i++) {
        if (generoBusca[0] == estoque[i].estilo[0]) {
            printf("%s | Ano: %d | Qtd: %d\n",
                   estoque[i].nomeBanda,
                   estoque[i].anoLancamento,
                   estoque[i].quantidadeEstoque);
            achou = 1;
        }
    }
    if (!achou) {
        printf("Nenhum CD encontrado nesse genero.\n");
    }
}
int main() {
    int opcao;
    do {
        printf("\n-- Menu de Estoque de CDs --\n");
        printf("1 - Cadastrar CD\n");
        printf("2 - Vender CD\n");
        printf("3 - Consultar CD\n");
        printf("4 - Buscar por genero\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) cadastrarCD();
        else if (opcao == 2) venderCD();
        else if (opcao == 3) consultarCD();
        else if (opcao == 4) buscarPorGenero();
    } while (opcao != 0);
    return 0;
}