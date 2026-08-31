/*
 * Calculadora - 20 Operacoes
 * Autor: Robert Fonteles Martins
 *
 * Programa em linguagem C que replica a logica da calculadora
 * desenvolvida originalmente no Flowgorithm, com 20 funcoes
 * diferentes: operacoes matematicas basicas, conversoes,
 * calculos geometricos e financeiros.
 */

#include <stdio.h>

int main(void) {
    int opcao;
    int numeroInteiro;
    double numero1, numero2, numero3, resultado;
    double valor, percentual, lado, base, altura, raio;
    double temperatura, taxa, tempo, distancia, peso, imc;

    opcao = -1;

    while (opcao != 0) {
        printf("\n===== CALCULADORA =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Media aritmetica\n");
        printf("6 - Porcentagem\n");
        printf("7 - Regra de tres\n");
        printf("8 - Celsius para Fahrenheit\n");
        printf("9 - Fahrenheit para Celsius\n");
        printf("10 - Perimetro do quadrado\n");
        printf("11 - Area do quadrado\n");
        printf("12 - Area do retangulo\n");
        printf("13 - Area do circulo\n");
        printf("14 - Volume do cubo\n");
        printf("15 - Juros simples\n");
        printf("16 - Desconto\n");
        printf("17 - Velocidade media\n");
        printf("18 - Par ou impar\n");
        printf("19 - Comparacao entre numeros\n");
        printf("20 - IMC\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: /* Soma */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 + numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2: /* Subtracao */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 - numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3: /* Multiplicacao */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 * numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4: /* Divisao */
                printf("Digite o dividendo: ");
                scanf("%lf", &numero1);
                printf("Digite o divisor: ");
                scanf("%lf", &numero2);
                if (numero2 == 0) {
                    printf("Nao e possivel dividir por zero.\n");
                } else {
                    resultado = numero1 / numero2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 5: /* Media aritmetica */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                resultado = (numero1 + numero2) / 2;
                printf("Media: %.2f\n", resultado);
                break;

            case 6: /* Porcentagem */
                printf("Digite o valor: ");
                scanf("%lf", &valor);
                printf("Digite a porcentagem: ");
                scanf("%lf", &percentual);
                resultado = valor * percentual / 100;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 7: /* Regra de tres */
                printf("Digite o primeiro valor conhecido: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo valor conhecido: ");
                scanf("%lf", &numero2);
                printf("Digite o terceiro valor: ");
                scanf("%lf", &numero3);
                if (numero1 == 0) {
                    printf("Nao e possivel fazer a regra de tres com o primeiro valor igual a zero.\n");
                } else {
                    resultado = numero2 * numero3 / numero1;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 8: /* Celsius para Fahrenheit */
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);
                resultado = temperatura * 9 / 5 + 32;
                printf("Temperatura em Fahrenheit: %.2f\n", resultado);
                break;

            case 9: /* Fahrenheit para Celsius */
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);
                resultado = (temperatura - 32) * 5 / 9;
                printf("Temperatura em Celsius: %.2f\n", resultado);
                break;

            case 10: /* Perimetro do quadrado */
                printf("Digite o lado do quadrado: ");
                scanf("%lf", &lado);
                resultado = lado * 4;
                printf("Perimetro: %.2f\n", resultado);
                break;

            case 11: /* Area do quadrado */
                printf("Digite o lado do quadrado: ");
                scanf("%lf", &lado);
                resultado = lado * lado;
                printf("Area: %.2f\n", resultado);
                break;

            case 12: /* Area do retangulo */
                printf("Digite a base do retangulo: ");
                scanf("%lf", &base);
                printf("Digite a altura do retangulo: ");
                scanf("%lf", &altura);
                resultado = base * altura;
                printf("Area: %.2f\n", resultado);
                break;

            case 13: /* Area do circulo */
                printf("Digite o raio do circulo: ");
                scanf("%lf", &raio);
                resultado = 3.14 * raio * raio;
                printf("Area: %.2f\n", resultado);
                break;

            case 14: /* Volume do cubo */
                printf("Digite o lado do cubo: ");
                scanf("%lf", &lado);
                resultado = lado * lado * lado;
                printf("Volume: %.2f\n", resultado);
                break;

            case 15: /* Juros simples */
                printf("Digite o valor inicial: ");
                scanf("%lf", &valor);
                printf("Digite a taxa de juros em porcentagem: ");
                scanf("%lf", &taxa);
                printf("Digite o tempo: ");
                scanf("%lf", &tempo);
                resultado = valor * taxa * tempo / 100;
                printf("Juros: %.2f\n", resultado);
                printf("Valor final: %.2f\n", valor + resultado);
                break;

            case 16: /* Desconto */
                printf("Digite o valor da compra: ");
                scanf("%lf", &valor);
                printf("Digite a porcentagem de desconto: ");
                scanf("%lf", &percentual);
                resultado = valor * percentual / 100;
                printf("Desconto: %.2f\n", resultado);
                printf("Valor final: %.2f\n", valor - resultado);
                break;

            case 17: /* Velocidade media */
                printf("Digite a distancia: ");
                scanf("%lf", &distancia);
                printf("Digite o tempo: ");
                scanf("%lf", &tempo);
                if (tempo == 0) {
                    printf("Nao e possivel dividir por zero.\n");
                } else {
                    resultado = distancia / tempo;
                    printf("Velocidade media: %.2f\n", resultado);
                }
                break;

            case 18: /* Par ou impar */
                printf("Digite um numero inteiro: ");
                scanf("%d", &numeroInteiro);
                if (numeroInteiro % 2 == 0) {
                    printf("O numero e par.\n");
                } else {
                    printf("O numero e impar.\n");
                }
                break;

            case 19: /* Comparacao entre numeros */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                if (numero1 > numero2) {
                    printf("O primeiro numero e maior.\n");
                } else if (numero1 < numero2) {
                    printf("O segundo numero e maior.\n");
                } else {
                    printf("Os numeros sao iguais.\n");
                }
                break;

            case 20: /* IMC */
                printf("Digite o peso em quilogramas: ");
                scanf("%lf", &peso);
                printf("Digite a altura em metros: ");
                scanf("%lf", &altura);
                if (altura == 0) {
                    printf("A altura nao pode ser zero.\n");
                } else {
                    imc = peso / (altura * altura);
                    printf("IMC: %.2f\n", imc);
                    if (imc < 18.5) {
                        printf("Classificacao: Abaixo do peso\n");
                    } else if (imc < 25) {
                  /*
 * Calculadora - 20 Operacoes
 * Autor: Robert Fonteles Martins
 *
 * Programa em linguagem C que replica a logica da calculadora
 * desenvolvida originalmente no Flowgorithm, com 20 funcoes
 * diferentes: operacoes matematicas basicas, conversoes,
 * calculos geometricos e financeiros.
 */

#include <stdio.h>

int main(void) {
    int opcao;
    int numeroInteiro;
    double numero1, numero2, numero3, resultado;
    double valor, percentual, lado, base, altura, raio;
    double temperatura, taxa, tempo, distancia, peso, imc;

    opcao = -1;

    while (opcao != 0) {
        printf("\n===== CALCULADORA =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Media aritmetica\n");
        printf("6 - Porcentagem\n");
        printf("7 - Regra de tres\n");
        printf("8 - Celsius para Fahrenheit\n");
        printf("9 - Fahrenheit para Celsius\n");
        printf("10 - Perimetro do quadrado\n");
        printf("11 - Area do quadrado\n");
        printf("12 - Area do retangulo\n");
        printf("13 - Area do circulo\n");
        printf("14 - Volume do cubo\n");
        printf("15 - Juros simples\n");
        printf("16 - Desconto\n");
        printf("17 - Velocidade media\n");
        printf("18 - Par ou impar\n");
        printf("19 - Comparacao entre numeros\n");
        printf("20 - IMC\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: /* Soma */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 + numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2: /* Subtracao */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 - numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3: /* Multiplicacao */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 * numero2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4: /* Divisao */
                printf("Digite o dividendo: ");
                scanf("%lf", &numero1);
                printf("Digite o divisor: ");
                scanf("%lf", &numero2);
                if (numero2 == 0) {
                    printf("Nao e possivel dividir por zero.\n");
                } else {
                    resultado = numero1 / numero2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 5: /* Media aritmetica */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                resultado = (numero1 + numero2) / 2;
                printf("Media: %.2f\n", resultado);
                break;

            case 6: /* Porcentagem */
                printf("Digite o valor: ");
                scanf("%lf", &valor);
                printf("Digite a porcentagem: ");
                scanf("%lf", &percentual);
                resultado = valor * percentual / 100;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 7: /* Regra de tres */
                printf("Digite o primeiro valor conhecido: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo valor conhecido: ");
                scanf("%lf", &numero2);
                printf("Digite o terceiro valor: ");
                scanf("%lf", &numero3);
                if (numero1 == 0) {
                    printf("Nao e possivel fazer a regra de tres com o primeiro valor igual a zero.\n");
                } else {
                    resultado = numero2 * numero3 / numero1;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 8: /* Celsius para Fahrenheit */
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);
                resultado = temperatura * 9 / 5 + 32;
                printf("Temperatura em Fahrenheit: %.2f\n", resultado);
                break;

            case 9: /* Fahrenheit para Celsius */
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);
                resultado = (temperatura - 32) * 5 / 9;
                printf("Temperatura em Celsius: %.2f\n", resultado);
                break;

            case 10: /* Perimetro do quadrado */
                printf("Digite o lado do quadrado: ");
                scanf("%lf", &lado);
                resultado = lado * 4;
                printf("Perimetro: %.2f\n", resultado);
                break;

            case 11: /* Area do quadrado */
                printf("Digite o lado do quadrado: ");
                scanf("%lf", &lado);
                resultado = lado * lado;
                printf("Area: %.2f\n", resultado);
                break;

            case 12: /* Area do retangulo */
                printf("Digite a base do retangulo: ");
                scanf("%lf", &base);
                printf("Digite a altura do retangulo: ");
                scanf("%lf", &altura);
                resultado = base * altura;
                printf("Area: %.2f\n", resultado);
                break;

            case 13: /* Area do circulo */
                printf("Digite o raio do circulo: ");
                scanf("%lf", &raio);
                resultado = 3.14 * raio * raio;
                printf("Area: %.2f\n", resultado);
                break;

            case 14: /* Volume do cubo */
                printf("Digite o lado do cubo: ");
                scanf("%lf", &lado);
                resultado = lado * lado * lado;
                printf("Volume: %.2f\n", resultado);
                break;

            case 15: /* Juros simples */
                printf("Digite o valor inicial: ");
                scanf("%lf", &valor);
                printf("Digite a taxa de juros em porcentagem: ");
                scanf("%lf", &taxa);
                printf("Digite o tempo: ");
                scanf("%lf", &tempo);
                resultado = valor * taxa * tempo / 100;
                printf("Juros: %.2f\n", resultado);
                printf("Valor final: %.2f\n", valor + resultado);
                break;

            case 16: /* Desconto */
                printf("Digite o valor da compra: ");
                scanf("%lf", &valor);
                printf("Digite a porcentagem de desconto: ");
                scanf("%lf", &percentual);
                resultado = valor * percentual / 100;
                printf("Desconto: %.2f\n", resultado);
                printf("Valor final: %.2f\n", valor - resultado);
                break;

            case 17: /* Velocidade media */
                printf("Digite a distancia: ");
                scanf("%lf", &distancia);
                printf("Digite o tempo: ");
                scanf("%lf", &tempo);
                if (tempo == 0) {
                    printf("Nao e possivel dividir por zero.\n");
                } else {
                    resultado = distancia / tempo;
                    printf("Velocidade media: %.2f\n", resultado);
                }
                break;

            case 18: /* Par ou impar */
                printf("Digite um numero inteiro: ");
                scanf("%d", &numeroInteiro);
                if (numeroInteiro % 2 == 0) {
                    printf("O numero e par.\n");
                } else {
                    printf("O numero e impar.\n");
                }
                break;

            case 19: /* Comparacao entre numeros */
                printf("Digite o primeiro numero: ");
                scanf("%lf", &numero1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &numero2);
                if (numero1 > numero2) {
                    printf("O primeiro numero e maior.\n");
                } else if (numero1 < numero2) {
                    printf("O segundo numero e maior.\n");
                } else {
                    printf("Os numeros sao iguais.\n");
                }
                break;

            case 20: /* IMC */
                printf("Digite o peso em quilogramas: ");
                scanf("%lf", &peso);
                printf("Digite a altura em metros: ");
                scanf("%lf", &altura);
                if (altura == 0) {
                    printf("A altura nao pode ser zero.\n");
                } else {
                    imc = peso / (altura * altura);
                    printf("IMC: %.2f\n", imc);
                    if (imc < 18.5) {
                        printf("Classificacao: Abaixo do peso\n");
                    } else if (imc < 25) {
                        printf("Classificacao: Peso normal\n");
                    } else if (imc < 30) {
                        printf("Classificacao: Sobrepeso\n");
                    } else {
                        printf("Classificacao: Obesidade\n");
                    }
                }
                break;

            case 0: /* Sair */
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    printf("Programa encerrado.\n");

    return 0;
}           printf("Classificacao: Peso normal\n");
                    } else if (imc < 30) {
                        printf("Classificacao: Sobrepeso\n");
                    } else {
                        printf("Classificacao: Obesidade\n");
                    }
                }
                break;

            case 0: /* Sair */
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    printf("Programa encerrado.\n");

    return 0;
}
