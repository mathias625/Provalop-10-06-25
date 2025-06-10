#include <stdio.h>//Não finalizei o exercício,não sabia finalizar "Vender só se tiver cadastro"
struct Pizza {
    char nome[30];
    float preco;
};
struct Cliente {
    char nome[30];
};
struct Pizza pizzas[10];
struct Cliente clientes[10];
int totalPizzas = 0;
int totalClientes = 0;
void cadastrarPizza() {
    printf("Nome da pizza: ");
    scanf("%s", pizzas[totalPizzas].nome);
    printf("Preco: ");
    scanf("%f", &pizzas[totalPizzas].preco);
    totalPizzas++;
}
void cadastrarCliente() {
    printf("Nome do cliente: ");
    scanf("%s", clientes[totalClientes].nome);
    totalClientes++;
}
void listarPizzas() {
    printf("\n--- PIZZAS DISPONIVEIS ---\n");
    for (int i = 0; i < totalPizzas; i++) {
        printf("%d - %s | R$ %.2f\n", i + 1, pizzas[i].nome, pizzas[i].preco);
    }
}
void listarClientes() {
    printf("\n--- CLIENTES CADASTRADOS ---\n");
    for (int i = 0; i < totalClientes; i++) {
        printf("%d - %s\n", i + 1, clientes[i].nome);
    }
}
int main() {
    int opcao;
    do {
        printf("\n--- MENU NOSTRA PIZZA ---\n");
        printf("1 - Cadastrar Pizza\n");
        printf("2 - Cadastrar Cliente\n");
        printf("3 - Listar Pizzas\n");
        printf("4 - Listar Clientes\n");
        printf("5 - Vender Pizza\n"); 
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            cadastrarPizza();
        } else if (opcao == 2) {
            cadastrarCliente();
        } else if (opcao == 3) {
            listarPizzas();
        } else if (opcao == 4) {
            listarClientes();
        } else if (opcao == 5) {
            
        }
    } while (opcao != 0);
    return 0;
}
