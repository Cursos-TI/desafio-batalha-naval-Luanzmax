#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.


    //Fazendo a matriz do tabuleiro 10x10.
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) //Loop usado para programar o tabuleiro 10x10, dois loops
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    //Produzindo os navios com os vetores

    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};

    //Declarando variáveis para colocar os navios no tabuleiro

    int linhaH = 4;
    int colunaH = 5;

    int linhaV = 1;
    int colunaV = 3;

    //Fazendo a sobreposição de coordenadas no tabuleiro

    for (int i = 0; i < 3; i++) //Loop for para a Vertical (Na mesma coluna, com linhas consecutivas)
    {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    for (int i = 0; i < 3; i++) //Loops for para a Horizontal (Na mesma linha, com colunas consecutivas)
    {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }
    
    //Exibindo o tabuleiro com Loops aninhados
    printf("TABULEIRO DA BATALHA NAVAL!\n");
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

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
