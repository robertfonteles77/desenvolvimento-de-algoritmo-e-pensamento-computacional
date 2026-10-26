/*
 * Controle de Equipamentos - Laboratorio de Informatica
 * Disciplina: Desenvolvimento de Algoritmos e Programacao em C
 * Autor: Robert Fonteles Martins
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_ARQUIVO "equipamentos.txt"
#define LIMITE_TEXTO 100

/* Mostra as opcoes disponiveis para o usuario */
void mostrarMenu() {
    printf("\n======= CONTROLE DE EQUIPAMENTOS =======\n");
    printf("[1] Registrar novo equipamento\n");
    printf("[2] Ver equipamentos registrados\n");
    printf("[3] Encerrar programa\n");
    printf("Sua escolha: ");
}

/* Le os dados do equipamento e grava uma linha no final do arquivo */
void registrarEquipamento() {
    FILE *arq;
    char descricao[LIMITE_TEXTO];
    char identificador[LIMITE_TEXTO];
    char local[LIMITE_TEXTO];

    printf("\nQual o nome do equipamento? ");
    fgets(descricao, sizeof(descricao), stdin);
    descricao[strcspn(descricao, "\n")] = '\0';

    printf("Qual o codigo de identificacao? ");
    fgets(identificador, sizeof(identificador), stdin);
    identificador[strcspn(identificador, "\n")] = '\0';

    printf("Onde ele esta localizado? ");
    fgets(local, sizeof(local), stdin);
    local[strcspn(local, "\n")] = '\0';

    arq = fopen(NOME_ARQUIVO, "a");

    if (arq == NULL) {
        printf("Nao foi possivel abrir o arquivo de dados.\n");
        return;
    }

    fprintf(arq, "%s | %s | %s\n", descricao, identificador, local);

    fclose(arq);

    printf("Registro salvo com sucesso!\n");
}

/* Le o arquivo linha por linha e mostra tudo na tela */
void verEquipamentos() {
    FILE *arq;
    char registro[LIMITE_TEXTO * 3];

    arq = fopen(NOME_ARQUIVO, "r");

    if (arq == NULL) {
        printf("\nAinda nao existe nenhum equipamento registrado.\n");
        return;
    }

    printf("\n----- LISTA DE EQUIPAMENTOS -----\n");

    while (fgets(registro, sizeof(registro), arq) != NULL) {
        printf("%s", registro);
    }

    fclose(arq);
}

int main() {

    char texto[10];
    int escolha;

    do {

        mostrarMenu();

        fgets(texto, sizeof(texto), stdin);
        escolha = atoi(texto);

        switch (escolha) {
        case 1:
            registrarEquipamento();
            break;
        case 2:
            verEquipamentos();
            break;
        case 3:
            printf("Programa encerrado. Ate a proxima!\n");
            break;
        default:
            printf("Opcao inexistente! Escolha 1, 2 ou 3.\n");
        }

    } while (escolha != 3);

    return 0;
}