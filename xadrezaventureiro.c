#include <stdio.h>

int main() {
    // -------------------------------
    // Simulação da TORRE
    // Estrutura de repetição: FOR
    // Movimento: 5 casas para a direita
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Linha separadora para visualização
    printf("\n");

    // -------------------------------
    // Simulação do BISPO
    // Estrutura de repetição: WHILE
    // Movimento: 5 casas na diagonal para cima e à direita
    // -------------------------------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Linha separadora para visualização
    printf("\n");

    // -------------------------------
    // Simulação da RAINHA
    // Estrutura de repetição: DO-WHILE
    // Movimento: 8 casas para a esquerda
    // -------------------------------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    printf("\n");

    // -------------------------------
    // Simulação do CAVALO (FOR + WHILE)
    // Movimento: 2 casas para BAIXO + 1 casa para ESQUERDA
    // -------------------------------

    int movimentos = 1; // Quantas vezes o cavalo vai fazer esse "L"
    int i;

    printf("Movimento do Cavalo:\n");

    // Loop externo (obrigatório: FOR) - controla quantos "L" o cavalo faz
    for (i = 0; i < movimentos; i++) {
        int passosBaixo = 0;

        // Loop interno (WHILE) - faz 2 movimentos para BAIXO
        while (passosBaixo < 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Depois dos dois passos para baixo, faz 1 para esquerda
        printf("Esquerda\n");
    }

    // Final do programa
    return 0;
}
