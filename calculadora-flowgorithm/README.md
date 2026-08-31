# Calculadora - 20 Operações (Flowgorithm)

## Autor
Robert Fonteles Martins

## Objetivo
Desenvolver, utilizando o **Flowgorithm**, uma calculadora com **20 funções diferentes**, aplicando os conceitos de lógica de programação, entrada e saída de dados, variáveis, operadores e estruturas de decisão.

## Descrição do projeto
O programa apresenta um menu principal com 20 operações matemáticas e de conversão, permitindo que o usuário escolha a opção desejada digitando o número correspondente. Após a execução de cada operação, o menu é exibido novamente, até que o usuário digite `0` para encerrar o programa.

A lógica foi construída com uma estrutura de repetição `Enquanto` (`while`), que mantém o menu ativo, combinada com estruturas de decisão `Se/Senão` (`if/else`) encadeadas para direcionar cada opção escolhida à sua respectiva operação.

## Funcionalidades (Menu de Opções)

| Opção | Função | Descrição |
|-------|--------|-----------|
| 1 | Soma | Soma dois números |
| 2 | Subtração | Subtrai dois números |
| 3 | Multiplicação | Multiplica dois números |
| 4 | Divisão | Divide dois números (com tratamento de divisão por zero) |
| 5 | Média aritmética | Calcula a média entre dois números |
| 6 | Porcentagem | Calcula a porcentagem de um valor |
| 7 | Regra de três | Calcula a regra de três simples entre três valores |
| 8 | Celsius para Fahrenheit | Converte temperatura de Celsius para Fahrenheit |
| 9 | Fahrenheit para Celsius | Converte temperatura de Fahrenheit para Celsius |
| 10 | Perímetro do quadrado | Calcula o perímetro a partir do lado |
| 11 | Área do quadrado | Calcula a área a partir do lado |
| 12 | Área do retângulo | Calcula a área a partir da base e altura |
| 13 | Área do círculo | Calcula a área a partir do raio |
| 14 | Volume do cubo | Calcula o volume a partir do lado |
| 15 | Juros simples | Calcula juros simples e valor final |
| 16 | Desconto | Calcula o desconto e o valor final de uma compra |
| 17 | Velocidade média | Calcula a velocidade média (distância/tempo, com tratamento de tempo zero) |
| 18 | Par ou ímpar | Verifica se um número inteiro é par ou ímpar |
| 19 | Comparação entre números | Compara dois números e indica o maior, o menor ou se são iguais |
| 20 | IMC | Calcula o Índice de Massa Corporal e sua classificação |
| 0 | Sair | Encerra o programa |

## Conceitos de programação aplicados
- **Variáveis**: inteiras (`Integer`) e reais (`Real`) para armazenar os dados de entrada e os resultados.
- **Entrada e saída de dados**: uso de `input` e `output` para interação com o usuário.
- **Operadores**: aritméticos (`+`, `-`, `*`, `/`, `mod`) e relacionais (`=`, `>`, `<`).
- **Estruturas de decisão**: `Se/Senão` encadeados para tratar as 20 opções do menu e validar casos especiais (divisão por zero, altura/tempo igual a zero, opção inválida).
- **Estrutura de repetição**: `Enquanto` para manter o menu em loop até a opção `0` ser escolhida.

## Restrições e validações implementadas
- Não é permitido dividir por zero (opções 4 e 17).
- Não é permitido calcular regra de três com o primeiro valor igual a zero (opção 7).
- Não é permitido calcular o IMC com altura igual a zero (opção 20).
- Caso o usuário digite uma opção fora do intervalo de 0 a 20, o programa exibe a mensagem "Opção inválida.".

## Como executar
1. Baixe e instale o [Flowgorithm](http://www.flowgorithm.org/).
2. Abra o arquivo do projeto (`.fprg`) no programa.
3. Clique em **Executar** para rodar o fluxograma.
4. Digite o número da operação desejada e siga as instruções exibidas na tela.
5. Digite `0` a qualquer momento para encerrar o programa.

## Estrutura do arquivo
- `Calculadora - 20 Operacoes.fprg` — arquivo do fluxograma criado no Flowgorithm, contendo toda a lógica da calculadora.
- `README.md` — este documento, com a descrição do projeto.
