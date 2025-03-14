#include <stdio.h>
 
int main() {
    
    int i, moviesquerda = 1;


      printf("Bem Vindo ao Jogo Xadrez\n");

      printf("\nBispo andar 5 casas para Diagonal \n ");
      for (i = 1; i <= 5; i++){
         printf("Direita Cima\n");

      }
          
      i = 1;

      printf("\nRainha andar 8 casas para Esquerda \n");
        while (i <= 8) {
            printf("Esquerda\n");
            i++;
        }
   
       i = 1;

       printf("\nTorre andar 5 casas para frente \n");
       do
       {
         printf("Frente \n");
         i++;
       } while (i <= 5);
       
       printf("\nCavalo andar 2 casas para baixo, e 1 para esquerda\n");
       while (moviesquerda--)
    {
         for (i = 0; i <= 1; i++){
            printf("Baixo \n");

         }
         printf("Esquerda \n");
      }

    return 0;
}