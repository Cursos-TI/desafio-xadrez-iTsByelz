#include <stdio.h>

void moverTorre(int casas){ // void para a torre
    if(casas > 0){
        printf("Torre: Direita\n");
        moverTorre(casas - 1);
    }

}

void moverBispo(int movimentosRestantes) {
    if (movimentosRestantes > 0) {
        printf("Movimento do Bispo (%d):\n", movimentosRestantes);

        for (int v = 0; v < 1; v++) { // movimento vertical (1 vez para representar "Cima")
            printf("  Bispo: Cima\n");

            for (int h = 0; h < 1; h++) { // movimento horizontal (1 vez para representar "Direita")
                printf("    Bispo: Direita\n");
            }
        }

        moverBispo(movimentosRestantes - 1); // chamada recursiva
    }
}


void moverRainha(int casas){ // void para a Rainha 
    if(casas > 0){
        printf("Rainha: Esquerda\n");
        moverRainha(casas - 1);
    }

}



int main() {
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);

    // Movimento complexo do Cavalo em "L"
    int movimentos = 5;

    for (int i = 0; i < movimentos; i++) {
        printf("Movimento %d do Cavalo:\n", i + 1);

        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("  Cavalo: Cima\n"); // duas casas para cima
            } else {
                if (i == 3) {
                    printf("  Cavalo: Pulando movimento (continue)\n");
                    continue; // exemplo de uso do continue
                }
                printf("  Cavalo: Direita\n"); // uma casa para a direita
            }
        }

        if (i == 4) {
            break; // exemplo de uso do break
        }
    }
       return 0;
   }
       


