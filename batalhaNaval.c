#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] ={   // Declaração de uma matriz 10x10 de inteiros
    // posição das colunas (abaixo:)
  // 0  1  2  3  4  5  6  7  8  9 e // Posição das Linhas:
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // Linha 0 da Matriz
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // Linha 1 da Matriz
    {0, 0, 3, 3, 3, 3, 0, 0, 0, 0}, // Linha 2 da Matriz
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // Linha 3 da Matriz
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // Linha 4 da Matriz
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, // Linha 5 da Matriz
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, // Linha 6 da Matriz
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, // Linha 7 da Matriz
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, // Linha 8 da Matriz
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  // Linha 9 da Matriz
};

    printf("*** Jogo Batalha Naval ***\n\n\n");
    printf("Confira abaixo a posição escolhida dos navios (horizontal e vertical)\n\n");

    // Informando a posição escolhida dos navios (horizontal)
    printf("Navio posicionado nas casas: tabuleiro[2][2], tabuleiro[2][3], tabuleiro[2][4], tabuleiro[2][5] \n");
    printf("Navio posicionado nas casas: %d, %d, %d, %d, (horizontal) \n\n", tabuleiro[2][2], tabuleiro[2][3], tabuleiro[2][4], tabuleiro[2][5]);

    // Informando a posição escolhida dos navios (vertical)
    printf("Navio posicionado nas casas: tabuleiro[5][6], tabuleiro[6][6], tabuleiro[7][6], tabuleiro[8][6] \n");
    printf("Navio posicionado nas casas: %d, %d, %d, %d, (veritical) \n\n\n", tabuleiro[5][6], tabuleiro[6][6], tabuleiro[7][6], tabuleiro[8][6]);

    // Retorna a tabela total com a posição escolhida dos navios (sendo 3 para parte do navio e 0 para espaço vazio), como no tabuleiro
    printf("    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, \n"); // Linha 0 da Matriz
    printf("    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, \n"); // Linha 1 da Matriz
    printf("    {0, 0, 3, 3, 3, 3, 0, 0, 0, 0}, \n"); // Linha 2 da Matriz
    printf("    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, \n"); // Linha 3 da Matriz
    printf("    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, \n"); // Linha 4 da Matriz
    printf("    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, \n"); // Linha 5 da Matriz
    printf("    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, \n"); // Linha 6 da Matriz
    printf("    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, \n"); // Linha 7 da Matriz
    printf("    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, \n"); // Linha 8 da Matriz
    printf("    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  \n\n\n"); // Linha 9 da Matriz


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
