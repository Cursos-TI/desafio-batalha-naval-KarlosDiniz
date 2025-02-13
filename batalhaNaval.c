#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Nível Novato - Posicionamento dos Navios
  // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
  // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
  // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

  int tabuleiro[9][7] ={   // Declaração de uma matriz 9 x 7 
  // posição das colunas (abaixo:)
  //0 1  2  3  4  5  6 e // Posição das Linhas:
  {0, 0, 0, 0, 0, 0, 0 }, // Linha 0 da Matriz
  {0, 0, 0, 0, 0, 0, 0 }, // Linha 1 da Matriz
  {0, 0, 3, 3, 3, 3, 0 }, // Linha 2 da Matriz
  {0, 0, 0, 0, 0, 0, 0 }, // Linha 3 da Matriz
  {0, 0, 0, 0, 0, 0, 0 }, // Linha 4 da Matriz
  {0, 0, 0, 0, 0, 0, 3 }, // Linha 5 da Matriz
  {0, 0, 0, 0, 0, 0, 3 }, // Linha 6 da Matriz
  {0, 0, 0, 0, 0, 0, 3 }, // Linha 7 da Matriz
  {0, 0, 0, 0, 0, 0, 3 }  // Linha 8 da Matriz
  };

  printf("*** Jogo Batalha Naval - Nivel Novato ***\n\n\n");
  printf("Confira abaixo a posição escolhida dos navios (horizontal e vertical)\n\n");

  // Informando a posição escolhida dos navios (horizontal)
  printf("Navio 01 posicionado nas casas: tabuleiro[2][2], tabuleiro[2][3], tabuleiro[2][4], tabuleiro[2][5] \n");
  printf("Navio 01 posicionado nas casas: %d, %d, %d, %d, (horizontal) \n\n", tabuleiro[2][2], tabuleiro[2][3], tabuleiro[2][4], tabuleiro[2][5]);

  // Informando a posição escolhida dos navios (vertical)
  printf("Navio 02 posicionado nas casas: tabuleiro[5][6], tabuleiro[6][6], tabuleiro[7][6], tabuleiro[8][6] \n");
  printf("Navio 02 posicionado nas casas: %d, %d, %d, %d, (vertical) \n\n\n", tabuleiro[5][6], tabuleiro[6][6], tabuleiro[7][6], tabuleiro[8][6]);

  // Retorna a tabela total com a posição escolhida dos navios (sendo 3 para parte do navio e 0 para espaço vazio), como no tabuleiro
  printf("Imprimindo o Tabuleiro, na forma como está na declaração da matriz:\n\n");
  printf("    {0, 0, 0, 0, 0, 0, 0}, \n"); 
  printf("    {0, 0, 0, 0, 0, 0, 0}, \n"); 
  printf("    {0, 0, 3, 3, 3, 3, 0}, \n"); 
  printf("    {0, 0, 0, 0, 0, 0, 0}, \n"); 
  printf("    {0, 0, 0, 0, 0, 0, 0}, \n"); 
  printf("    {0, 0, 0, 0, 0, 0, 3}, \n"); 
  printf("    {0, 0, 0, 0, 0, 0, 3}, \n"); 
  printf("    {0, 0, 0, 0, 0, 0, 3}, \n"); 
  printf("    {0, 0, 0, 0, 0, 0, 3}  \n\n\n");


  // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
  // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
  // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
  // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

  int tabuleiro2 [LINHAS][COLUNAS] ={   // Declaração de uma matriz 10x10 
    // posição das colunas (abaixo:)
    //0 1  2  3  4  5  6  7  8  9 e // Posição das Linhas:
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, // Linha 0 da Matriz
    {0, 0, 0, 0, 0, 0, 0, 3, 0, 0}, // Linha 1 da Matriz
    {0, 0, 3, 3, 3, 3, 0, 0, 3, 0}, // Linha 2 da Matriz
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 3}, // Linha 3 da Matriz
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // Linha 4 da Matriz
    {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, // Linha 5 da Matriz
    {0, 0, 0, 3, 0, 0, 3, 0, 0, 0}, // Linha 6 da Matriz
    {0, 0, 3, 0, 0, 0, 3, 0, 0, 0}, // Linha 7 da Matriz
    {0, 3, 0, 0, 0, 0, 3, 0, 0, 0}, // Linha 8 da Matriz
    {3, 0, 0, 0, 0, 0, 0, 0, 0, 0}  // Linha 9 da Matriz
  };

    printf("\n*** Jogo Batalha Naval - Nivel Aventureiro ***\n\n\n");
    printf("Confira abaixo a posição escolhida dos navios (horizontal, vertical e diagonal)\n\n");

    // Informando a posição escolhida dos navios (horizontal)
    printf("Navio 01 posicionado nas casas: tabuleiro2[2][2], tabuleiro2[2][3], tabuleiro2[2][4], tabuleiro2[2][5] \n");
    printf("Navio 01 posicionado nas casas: %d, %d, %d, %d, (horizontal) \n\n", tabuleiro2[2][2], tabuleiro2[2][3], tabuleiro2[2][4], tabuleiro2[2][5]);

    // Informando a posição escolhida dos navios (vertical)
    printf("Navio 02 posicionado nas casas: tabuleiro2[5][6], tabuleiro2[6][6], tabuleiro2[7][6], tabuleiro2[8][6] \n");
    printf("Navio 02 posicionado nas casas: %d, %d, %d, %d, (veritical) \n\n\n", tabuleiro2[5][6], tabuleiro2[6][6], tabuleiro2[7][6], tabuleiro2[8][6]);

    // Informando a posição escolhida dos navios (diagonal)
    printf("Navio 03 posicionado nas casas: tabuleiro2[0][6], tabuleiro2[1][7], tabuleiro2[2][8], tabuleiro2[3][9] \n");
    printf("Navio 03 posicionado nas casas: %d, %d, %d, %d, (diagonal) \n\n", tabuleiro2[0][6], tabuleiro2[1][7], tabuleiro2[2][8], tabuleiro2[3][9]);
    printf("... e \n\nNavio 04 posicionado nas casas: tabuleiro2[9][0], tabuleiro2[8][1], tabuleiro2[7][2], tabuleiro2[6][3] \n");
    printf("Navio 04 posicionado nas casas: %d, %d, %d, %d, (diagonal) \n\n\n", tabuleiro2[9][0], tabuleiro2[8][1], tabuleiro2[7][2], tabuleiro2[6][3]);

    // Retorna a tabela total com a posição escolhida dos navios (sendo 3 para parte do navio e 0 para espaço vazio), como no tabuleiro2
    printf("Imprimindo o Tabuleiro2 na forma de coordenadas: \n\n\n");

    for (int i=0; i< LINHAS; i++) {
      for (int j=0; j< COLUNAS; j++){
        printf("tabuleiro2[%d][%d] = %d\n", i, j, tabuleiro2[i][j]); // Exibe o tabuleiro2 na forma de coordenadas, linha por linha
      }
      printf("\n");
    }
  printf("\nImprimindo o Tabuleiro2 na forma de Matriz: \n\n\n");
      for (int i=0; i< LINHAS; i++) {
        for (int j=0; j< COLUNAS; j++){
          printf("%d ",tabuleiro2[i][j]); // Exibe o Tabuleiro2 no formato de Matriz:
        }
      printf("\n");
      }
  printf("\n\n");


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