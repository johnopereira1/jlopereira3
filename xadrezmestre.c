#include <stdio.h>

// Função recursiva para o movimento da Torre (Direita)
void moverTorre(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Direita\n");
    moverTorre(passosRestantes - 1);
}

// Função recursiva com loops aninhados para o Bispo (Cima Direita)
void moverBispo(int linhaAtual, int maxLinhas) {
    if (linhaAtual >= maxLinhas) return;

    for (int col = 0; col < 1; col++) { // Simula um passo horizontal por linha
        printf("Cima Direita\n");
    }

    moverBispo(linhaAtual + 1, maxLinhas);
}

// Função recursiva para o movimento da Rainha (Esquerda)
void moverRainha(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(passosRestantes - 1);
}

int main() {
    // -------------------------------
    // Simulação da TORRE
    // Estrutura de repetição: FOR (substituída por função recursiva)
    // Movimento: 5 casas para a direita
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre); // chamada recursiva

    // Linha separadora para visualização
    printf("\n");

    // -------------------------------
    // Simulação do BISPO
    // Estrutura de repetição: WHILE (substituída por função recursiva com loop interno)
    // Movimento: 5 casas na diagonal para cima e à direita
    // -------------------------------
    int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    moverBispo(0, casasBispo); // chamada recursiva com loop interno

    // Linha separadora para visualização
    printf("\n");

    // -------------------------------
    // Simulação da RAINHA
    // Estrutura de repetição: DO-WHILE (substituída por função recursiva)
    // Movimento: 8 casas para a esquerda
    // -------------------------------
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha); // chamada recursiva

    printf("\n");

    // -------------------------------
    // Simulação do CAVALO (FOR + loops aninhados e controle de fluxo)
    // Movimento: 2 casas para CIMA + 1 casa para DIREITA
    // -------------------------------
    int movimentos = 1; // Quantas vezes o cavalo vai fazer esse "L"
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        int passosCima = 0;

        while (passosCima < 3) { // intencionalmente indo até 3 para controle com break
            if (passosCima == 2) {
                passosCima++; // força saída do loop
                break;
            }

            printf("Cima\n");
            passosCima++;

            // se der erro, continua
            if (passosCima < 0) {
                continue;
            }
        }

        for (int j = 0; j < 2; j++) {
            if (j == 1) {
                printf("Direita\n");
                break;
            }
        }
    }

    // Final do programa
    return 0;
}
