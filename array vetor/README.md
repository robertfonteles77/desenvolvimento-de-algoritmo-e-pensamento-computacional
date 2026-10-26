# Análise de Vetor em C

Programa em linguagem C que lê **20 números inteiros** digitados pelo usuário, guarda todos em um vetor e mostra estatísticas simples sobre eles.

## O que o programa faz

1. Lê 20 números inteiros, um de cada vez.
2. Valida a entrada: se o usuário digitar algo que não seja um número inteiro (por exemplo, `abc` ou `3.5`), o programa avisa e pede o valor de novo.
3. Percorre o vetor e calcula:
   - o **maior** e o **menor** valor;
   - a **quantidade de números positivos** e de **negativos** (o zero não conta em nenhum dos dois);
   - a **soma dos múltiplos de 3**;
   - a **média dos números pares**.
4. Se não houver nenhum número par, mostra uma mensagem em vez de calcular a média (evita divisão por zero).
5. Exibe todos os valores armazenados no vetor, com seus índices.

## Como compilar e executar

É necessário ter um compilador C instalado, como o `gcc`.

```bash
gcc main.c -o analise_vetor
./analise_vetor
```

No Windows, o executável gerado pode ser rodado com `analise_vetor.exe`.

> Troque `main.c` pelo nome real do seu arquivo, se for diferente.

## Exemplo de uso

Entrada (os 20 valores digitados, na ordem):

```
3 -6 0 7 12 -9 4 15 -2 8 5 -1 18 9 10 -4 21 2 -8 6
```

Saída (parte final):

```
--- Resultado da analise ---
Maior numero digitado: 21
Menor numero digitado: -9
Total de numeros positivos: 13
Total de numeros negativos: 6
Soma de todos os multiplos de 3: 69
Media dos valores pares: 3.33

--- Valores armazenados ---
vetor[0] -> 3
vetor[1] -> -6
vetor[2] -> 0
...
vetor[19] -> 6
```

## Estrutura do código

O programa está todo na função `main` e é dividido em quatro partes:

| Parte | Descrição |
|---|---|
| Variáveis do programa | Declara o vetor, os contadores e os acumuladores |
| Entrada de dados | Lê os 20 valores com validação usando `scanf` |
| Análise dos valores | Um único laço `for` que faz todos os cálculos |
| Apresentação do resultado | Mostra as estatísticas e a lista completa do vetor |

## Conceitos de C usados

- Vetores (arrays)
- Laços `for` e `do while`
- Condicionais `if` / `else if` / `else`
- Operador de resto (`%`) para descobrir números pares e múltiplos de 3
- Conversão de tipo (`(float)`) para obter a média com casas decimais
- Validação de entrada com o retorno do `scanf`
- Limpeza do buffer do teclado com `getchar()`

## Observações

- O zero é considerado par e múltiplo de 3, mas não é positivo nem negativo.
- Números negativos também entram nas somas e na média (por exemplo, `-6` é par e múltiplo de 3).
- O programa aceita apenas números inteiros.

## Autor

Seu nome aqui
