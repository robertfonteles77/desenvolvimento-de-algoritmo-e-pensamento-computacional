# Controle de Equipamentos em C

Programa de terminal em linguagem C para registrar e consultar os equipamentos de um laboratório de informática. Os dados ficam salvos em um arquivo de texto, então continuam disponíveis mesmo depois de fechar o programa.

## O que o programa faz

O programa mostra um menu com três opções:

1. **Registrar novo equipamento:** pede o nome, o código de identificação e a localização do equipamento e grava tudo em uma linha do arquivo `equipamentos.txt`.
2. **Ver equipamentos registrados:** lê o arquivo e mostra na tela todos os equipamentos já cadastrados.
3. **Encerrar programa:** finaliza a execução.

Se o usuário digitar uma opção que não existe, o programa avisa e mostra o menu de novo.

## Como compilar e executar

É necessário ter um compilador C instalado, como o `gcc`.

```bash
gcc main.c -o equipamentos
./equipamentos
```

No Windows, rode com `equipamentos.exe`.

> Troque `main.c` pelo nome real do seu arquivo, se for diferente.

## Exemplo de uso

```
======= CONTROLE DE EQUIPAMENTOS =======
[1] Registrar novo equipamento
[2] Ver equipamentos registrados
[3] Encerrar programa
Sua escolha: 1

Qual o nome do equipamento? Monitor Dell 24
Qual o codigo de identificacao? LAB-001
Onde ele esta localizado? Sala 3
Registro salvo com sucesso!

======= CONTROLE DE EQUIPAMENTOS =======
[1] Registrar novo equipamento
[2] Ver equipamentos registrados
[3] Encerrar programa
Sua escolha: 2

----- LISTA DE EQUIPAMENTOS -----
Monitor Dell 24 | LAB-001 | Sala 3
```

## Formato do arquivo de dados

Cada equipamento ocupa uma linha do arquivo `equipamentos.txt`, com os campos separados por ` | `:

```
nome | codigo | localizacao
```

O arquivo é criado automaticamente no primeiro cadastro, na mesma pasta onde o programa é executado. Novos registros são sempre adicionados ao final, sem apagar os anteriores.

## Estrutura do código

| Função | Descrição |
|---|---|
| `mostrarMenu` | Exibe as opções disponíveis |
| `registrarEquipamento` | Lê os dados digitados e grava uma linha no arquivo |
| `verEquipamentos` | Lê o arquivo linha por linha e mostra na tela |
| `main` | Repete o menu até o usuário escolher sair |

## Conceitos de C usados

- Funções
- Estrutura `do while` com `switch`
- Manipulação de arquivos de texto: `fopen`, `fprintf`, `fgets` e `fclose`
- Modos de abertura de arquivo: `"a"` (adicionar ao final) e `"r"` (leitura)
- Leitura segura de texto com `fgets`
- Remoção do `\n` com `strcspn`
- Conversão de texto para número com `atoi`
- Constantes com `#define`

## Observações

- Se o arquivo não puder ser aberto, o programa mostra uma mensagem de erro e volta ao menu.
- Se ainda não houver nenhum equipamento registrado, a listagem avisa que não existe nada cadastrado.
- Cada campo aceita até 99 caracteres. Textos maiores são cortados.
- O programa não impede códigos repetidos.

## Autor

Robert Fonteles Martins
