#include <stdio.h>


int main() {
    int i;
    int movimentoCompleto = 1;
    
       //Mover a Torre 5 casas para a direita    
                                                                            
       for (int i = 0; i < 5; i++)
       {
       printf("Torre: Direita\n");
       }

        //Mover o Bispo 5 casas para a diagonal    
       i = 0; // reinicializa i para o while
       while (i < 5) {
           printf("Bispo: Cima,Direita \n");
           i++;
       }

       //Mover a Rainha 8 casas para a esquerda    
       i = 0; // reinicializa i para o do...while
       do {
           printf("Rainha: Esquerda\n");
           i++;
       } while (i < 8);
   

       while (movimentoCompleto--)
       {
        for (int i = 0; i < 2; i++){
            printf("Cavalo: Cima\n");
        }
        
        printf("Cavalo: Direita\n");

       }
       

       return 0;
   }
       


