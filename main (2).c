/****************************************************************************************************************

Arthur Petenao de Oliveira -   RA 8137050
Matheus Tavares Cavalcante  -    RA 8138429

2o sem Ciencia da computacao - 03/05/2023

Faca a tabela da banda. 

****************************************************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX_BANDAS 100

#define qt_bandas 3
int bandas;
// Definição da estrutura BANDA
typedef struct {
    char nome[50];
    char estilo[30];
    int num_integrantes;
    int ranking;
} BANDA;

// Função para cadastrar as bandas
void leBanda(BANDA *v, int qt) {
    for (int i = 0; i < qt; i++) {
        printf("Digite o nome da banda: ");
        scanf("%s", v[i].nome);
        printf("Digite o estilo da banda: ");
        scanf("%s", v[i].estilo);
        printf("Digite o número de integrantes da banda: ");
        scanf("%d", &v[i].num_integrantes);
        printf("Digite o ranking da banda (de 1 a 5): ");
        scanf("%d", &v[i].ranking);
        printf("\n\n");
    }
    bandas = qt;
}

// Função para exibir as informações de todas as bandas
void exibeBanda(BANDA *v, int qt) {
    printf("\n-- LISTA DE BANDAS --\n");
    for (int i = 0; i < qt; i++) {
        printf("Banda %d\n", i+1);
        printf("Nome: %s\n", v[i].nome);
        printf("Estilo: %s\n", v[i].estilo);
        printf("Número de integrantes: %d\n", v[i].num_integrantes);
        printf("Ranking: %d\n", v[i].ranking);
        printf("------------------------\n");
    }
}

// Função para buscar as bandas por estilo musical
void procuraBandaEstilo(BANDA *v, int qt) {
    char estilo[30];
    printf("Digite o estilo musical que deseja buscar: ");
    scanf("%s", estilo);
    printf("\n-- BANDAS DE ESTILO %s --\n", estilo);
    for (int i = 0; i < qt; i++) {
        if (strcmp(v[i].estilo, estilo) == 0) {
            printf("Banda %d\n", i+1);
            printf("Nome: %s\n", v[i].nome);
            printf("Estilo: %s\n", v[i].estilo);
            printf("Número de integrantes: %d\n", v[i].num_integrantes);
            printf("Ranking: %d\n", v[i].ranking);
            printf("------------------------\n");
        }
    }
}

// Função para buscar as bandas pelo ranking
void procuraBandaRanking(BANDA *v, int qt) {
    int ranking;
    printf("Digite o ranking que deseja buscar (de 1 a 5): ");
    scanf("%d", &ranking);
    printf("\n-- BANDAS NO RANKING %d --\n", ranking);
    for (int i = 0; i < qt; i++) {
        if (v[i].ranking == ranking) {
            printf("Banda %d\n", i+1);
            printf("Nome: %s\n", v[i].nome);
            printf("Estilo: %s\n", v[i].estilo);
            printf("Número de integrantes: %d\n", v[i].num_integrantes);
            printf("Ranking: %d\n", v[i].ranking);
            printf("------------------------\n");
        }
    }
}

void procuraBandaNome(BANDA *v, int qt) {
    char nome[50];
    printf("Digite o nome da banda: ");
    scanf("%s", nome);
    printf("\n-- BUSCA POR NOME: %s --\n", nome);
    int found = 0;
    for (int i = 0; i < qt; i++) {
        if (strcmp(v[i].nome, nome) == 0) {
            printf("Banda %d\n", i+1);
            printf("Nome: %s\n", v[i].nome);
            printf("Estilo: %s\n", v[i].estilo);
            printf("Número de integrantes: %d\n", v[i].num_integrantes);
            printf("Ranking: %d\n", v[i].ranking);
            printf("------------------------\n");
            found = 1;
        }
    }
    if (!found) {
        printf("Banda não encontrada\n");
    }
}

void menu() {
  int opcao;

  do {
    printf("\n---------- MENU ----------\n");
    printf("1. Cadastrar banda\n");
    printf("2. Listar todas as bandas\n");
    printf("3. Procurar banda por estilo musical\n");
    printf("4. Procurar banda por ranking\n");
    printf("5. Procurar banda por nome\n");
    printf("0. Sair\n\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    printf("\n");
    bandas = 0;
    switch (opcao) {
      case 0:
        printf("\nSaindo do programa...\n");
        break;
      case 1:
        leBanda(&bandas, qt_bandas);
        break;
      case 2:
        exibeBanda(&bandas, qt_bandas);
        break;
      case 3:
        procuraBandaEstilo(&bandas, qt_bandas);
        break;
      case 4:
        procuraBandaRanking(&bandas, qt_bandas);
        break;
      case 5:
        procuraBandaNome(&bandas, qt_bandas);
        break;
      default:
        printf("\nOpção inválida! Tente novamente.\n");
    }
  } while (opcao != 0);
}

int main()
{
    // printf("digite a quantidade de Bandas para esse projeto: ");
    // scanf("%d",&qt_bandas);
    menu();
    // printf("Hello World");

    return 0;
}



