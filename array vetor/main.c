#include <stdio.h>

int main() {

    // ===== Variaveis do programa =====
    int vetor[20];            // guarda os 20 valores digitados
    int indice;               // controla os lacos de repeticao

    int maior, menor;         // extremos do vetor
    int leituraOk;            // retorno do scanf (1 = deu certo, 0 = deu errado)

    int qtdPositivos = 0;     // quantos valores sao maiores que zero
    int qtdNegativos = 0;     // quantos valores sao menores que zero

    int somaPares = 0;        // soma dos valores pares
    int qtdPares = 0;         // quantos valores pares existem
    float mediaPares;         // media dos pares

    int somaMult3 = 0;        // soma dos multiplos de 3

    // ===== Entrada de dados =====
    printf("--- Entrada de dados ---\n");
    for (indice = 0; indice < 20; indice++) {
        do {
            printf("Informe o valor %d de 20: ", indice + 1);
            leituraOk = scanf("%d", &vetor[indice]);

            if (leituraOk != 1) {
                printf("Valor invalido! So sao aceitos numeros inteiros.\n");
                while (getchar() != '\n');   // descarta o restante da linha digitada
            }
        } while (leituraOk != 1);
    }

    // ===== Analise dos valores =====
    // Maior e menor comecam com o primeiro valor do vetor
    menor = vetor[0];
    maior = vetor[0];

    for (indice = 0; indice < 20; indice++) {

        // Verifica o menor e o maior valor ate o momento
        if (vetor[indice] < menor) {
            menor = vetor[indice];
        }
        if (vetor[indice] > maior) {
            maior = vetor[indice];
        }

        // Classifica em positivo ou negativo (o zero nao conta em nenhum)
        if (vetor[indice] < 0) {
            qtdNegativos++;
        } else if (vetor[indice] > 0) {
            qtdPositivos++;
        }

        // Se for par, acumula a soma e conta mais um par
        if (vetor[indice] % 2 == 0) {
            somaPares += vetor[indice];
            qtdPares++;
        }

        // Se for multiplo de 3, acumula na soma
        if (vetor[indice] % 3 == 0) {
            somaMult3 += vetor[indice];
        }
    }

    // ===== Apresentacao do resultado =====
    printf("\n--- Resultado da analise ---\n");

    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);

    printf("Total de numeros positivos: %d\n", qtdPositivos);
    printf("Total de numeros negativos: %d\n", qtdNegativos);

    printf("Soma de todos os multiplos de 3: %d\n", somaMult3);

    // Evita dividir por zero caso nenhum par tenha sido digitado
    if (qtdPares > 0) {
        mediaPares = (float) somaPares / qtdPares;
        printf("Media dos valores pares: %.2f\n", mediaPares);
    } else {
        printf("Nenhum valor par foi digitado.\n");
    }

    // ===== Lista completa do vetor =====
    printf("\n--- Valores armazenados ---\n");
    for (indice = 0; indice < 20; indice++) {
        printf("vetor[%d] -> %d\n", indice, vetor[indice]);
    }

    return 0;
}