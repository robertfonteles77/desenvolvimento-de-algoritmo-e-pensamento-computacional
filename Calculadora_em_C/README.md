# Calculadora em C

## Identificação do estudante
**Nome:** Robert Fonteles Martins
**Disciplina:** Desenvolvimento de Algoritmos e Pensamento Computacional
**Atividade:** Atividade Prática — Calculadora em C (valor: 0,5 ponto)

## Descrição do projeto
Este projeto é uma calculadora desenvolvida em linguagem C, executada via terminal, que oferece ao usuário um menu com **20 operações matemáticas diferentes**. Cada operação é implementada em uma **função específica**, seguindo uma estrutura modular de código, com tratamento de erros para situações como divisão por zero, raiz quadrada de número negativo, logaritmo de número não positivo e tangente indefinida.

## Objetivo
Aplicar de forma integrada, em um único projeto, os principais conceitos de lógica de programação e da linguagem C:
- Variáveis e tipos de dados;
- Entrada e saída de dados (`scanf` / `printf`);
- Estruturas condicionais (`switch...case`, `if...else`);
- Estrutura de repetição (`while`);
- Funções e modularização;
- Uso da biblioteca `math.h`;
- Organização de código e documentação técnica no GitHub.

## Funcionalidades implementadas
O programa exibe um menu principal em loop, permitindo ao usuário executar quantas operações desejar até escolher a opção `0`, que encerra o programa. Antes de cada cálculo, o programa solicita os dados necessários com `scanf()` e, ao final, apresenta o resultado com `printf()`. Operações com restrições matemáticas (domínio) são validadas antes do cálculo, exibindo uma mensagem de erro amigável quando a entrada é inválida.

## Relação das 20 funções desenvolvidas

| # | Função em C | Operação | Observações |
|---|-------------|----------|-------------|
| 1 | `somar` | Soma de dois números | — |
| 2 | `subtrair` | Subtração de dois números | — |
| 3 | `multiplicar` | Multiplicação de dois números | — |
| 4 | `dividir` | Divisão de dois números | Trata divisão por zero |
| 5 | `potencia` | Potenciação (base ^ expoente) | Usa `pow()` |
| 6 | `raizQuadrada` | Raiz quadrada | Usa `sqrt()`; trata número negativo |
| 7 | `raizCubica` | Raiz cúbica | Usa `cbrt()` |
| 8 | `seno` | Seno de um ângulo (em graus) | Usa `sin()` |
| 9 | `cosseno` | Cosseno de um ângulo (em graus) | Usa `cos()` |
| 10 | `tangente` | Tangente de um ângulo (em graus) | Usa `tan()`; trata ângulos indefinidos (ex.: 90°) |
| 11 | `logaritmoNatural` | Logaritmo natural (ln) | Usa `log()`; trata número não positivo |
| 12 | `logaritmoBase10` | Logaritmo na base 10 | Usa `log10()`; trata número não positivo |
| 13 | `valorAbsoluto` | Valor absoluto (módulo) | Usa `fabs()` |
| 14 | `porcentagem` | Cálculo de porcentagem de um valor | — |
| 15 | `mediaAritmetica` | Média aritmética entre dois números | — |
| 16 | `grausParaRadianos` | Conversão de graus para radianos | Usa `M_PI` |
| 17 | `radianosParaGraus` | Conversão de radianos para graus | Usa `M_PI` |
| 18 | `areaCirculo` | Área do círculo | Usa `M_PI` e `pow()` |
| 19 | `areaRetangulo` | Área do retângulo | — |
| 20 | `hipotenusa` | Cálculo da hipotenusa (triângulo retângulo) | Usa `hypot()` |

## Bibliotecas utilizadas
- **`stdio.h`** — entrada e saída padrão (`printf`, `scanf`).
- **`math.h`** — funções matemáticas (`pow`, `sqrt`, `cbrt`, `sin`, `cos`, `tan`, `log`, `log10`, `fabs`, `hypot`) e a constante `M_PI`.

## Organização do código
O arquivo `calculadora.c` está estruturado da seguinte forma:
1. **Cabeçalho e includes**: comentário de identificação do projeto e inclusão das bibliotecas `stdio.h` e `math.h`.
2. **Protótipos das funções**: declaração antecipada de todas as 20 funções de operação, além da função `exibirMenu()`.
3. **Função `main()`**: contém a estrutura de repetição `while`, responsável por manter o menu ativo, e uma estrutura condicional `switch...case`, responsável por direcionar a opção escolhida à função correspondente. É nela que ocorrem as chamadas de `scanf()` (entrada) e `printf()` (saída).
4. **Função `exibirMenu()`**: imprime o menu de opções na tela.
5. **Implementação das 20 funções**: cada operação está isolada em sua própria função, recebendo os parâmetros necessários (`double`) e retornando o resultado — algumas funções (como `dividir`, `raizQuadrada`, `tangente`, `logaritmoNatural` e `logaritmoBase10`) retornam um `int` como código de sucesso/erro (`1`/`0`) e devolvem o resultado por meio de um ponteiro, permitindo tratar restrições de domínio sem interromper o programa.

## Tratamento de erros
- **Divisão por zero** (opção 4): verificado antes de dividir.
- **Raiz quadrada de número negativo** (opção 6): não é calculada; o programa avisa o usuário.
- **Tangente indefinida** (opção 10): verificado quando o cosseno do ângulo é próximo de zero (ex.: 90°, 270°).
- **Logaritmo de número não positivo** (opções 11 e 12): o cálculo só é feito para números maiores que zero.
- **Área do círculo, área do retângulo e hipotenusa** (opções 18, 19 e 20): valores negativos de raio, base, altura ou catetos são rejeitados.
- **Opção de menu inválida**: qualquer valor fora do intervalo de 0 a 20 exibe a mensagem "Opção inválida.".

## Conceitos de programação aplicados
- **Funções**: cada uma das 20 operações foi implementada em uma função independente, favorecendo reuso e organização do código.
- **Estruturas condicionais**: `switch...case` direciona a opção escolhida no menu; `if...else` trata validações de domínio dentro de cada operação.
- **Estrutura de repetição**: `while` mantém o menu ativo até que o usuário escolha `0`.
- **Entrada e saída de dados**: `scanf()` para capturar os valores digitados pelo usuário e `printf()` para exibir menus, instruções e resultados.
- **Biblioteca `math.h`**: usada para operações que exigem funções matemáticas prontas, como potência, raízes, funções trigonométricas e logaritmos.

## Instruções para compilação e execução

### Compilar (Linux/macOS/WSL, usando gcc)
```bash
gcc -Wall -o calculadora calculadora.c -lm
```
> A flag `-lm` é necessária para vincular a biblioteca matemática (`math.h`).

### Executar
```bash
./calculadora
```

### Windows (usando MinGW)
```bash
gcc -Wall -o calculadora.exe calculadora.c -lm
calculadora.exe
```

## Exemplo de uso
```
===================================
        CALCULADORA EM C
===================================
 1  - Soma
 2  - Subtracao
 ...
20  - Hipotenusa
 0  - Sair
===================================
Digite a opcao desejada: 1
Digite o primeiro numero: 10
Digite o segundo numero: 5
Resultado: 15.0000

Digite a opcao desejada: 4
Digite o dividendo: 10
Digite o divisor: 0
Erro: nao e possivel dividir por zero.

Digite a opcao desejada: 0
Encerrando o programa...
Programa encerrado.
```

## Estrutura de pastas no repositório
```
Desenvolvimento_de_Algoritmos_e_Pensamento_Computacional/
└── Calculadora_em_C/
    ├── calculadora.c
    └── README.md
```
