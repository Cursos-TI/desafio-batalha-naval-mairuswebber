#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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

    int mar [10][10];
    int marX = 0;
    int marY = 0;
    int eixoY = 1;

    for ( marX = 0 ; marX < 10 ; marX++ ) { // tabuleiro
        for ( marY = 0 ; marY < 10 ; marY++ ) {
            mar[marX][marY] = 0;
        }
    }
    for ( marY = 1 ; marY < 4 ; marY++ ) { // navio 1 (horizontal)
        mar[1][marY] = 1;
    }
    for ( marX = 1 ; marX < 4 ; marX++ ) { // navio 2 (vertical)
        mar[marX][8] = 2;
    }
    for ( marX = 5, marY = 1 ; marX < 8, marY < 4 ; marX++, marY++ ) { // navio 3 (diagonal)
        mar[marX][marY] = 3;
    }
    for ( marX = 1, marY = 6 ; marX < 4, marY > 3 ; marX++, marY-- ) { // navio 3 (diagonal)
        mar[marX][marY] = 4;
    }

    printf("\nTabuleiro Batalha Naval\n=======================\n\n");
    printf("    A  B  C  D  E  F  G  H  I  J\n");
    for( marX = 0, eixoY = 1 ; marX < 10, eixoY < 11 ; marX++, eixoY++ ) {
        printf("%02d  ", eixoY);
        for( marY = 0 ; marY < 10 ; marY++ ) {
            printf("%d  ", mar[marX][marY]);
        }
        printf("\n");
    };
    printf("\n");
    return 0;
}