#include <stdio.h>
 
   void bispo(){
      for (int i = 0; i <= 5; i++){
         printf("Cima \n");
      }

          printf("\n");

            for (int j = 0; j <= 5; j++){  
               printf("Direita\n ");
               
            }
            
   }  

   void torre(int movitorre){
      if (movitorre > 0){
         printf("Direita \n");
         torre(movitorre - 1);
      }
      
   }

   void rainha(int movirainha){
      if (movirainha > 0){
         printf("Esquerda\n");
         rainha(movirainha - 1);
      }
      
   }


int main(){

   printf("\nBem Vindo ao Jogo Xadrez\n");
   printf("Bispo andar 5 casas para Diagonal\n ");
   bispo();

   printf("\nTorre andar 5 casas para Direita \n");
   torre(5);

   printf("\nRainha andar 8 casas para Esquerda \n");
   rainha(8);

   printf("\nCavalo andar 2 casas para Cima, e 1 para Direita\n");
   for (int i = 0; i <= 1; i++){
      if (i == 0) {
        printf("Cima\n");
        continue;  
    }
   
    for (int j = 0; j <= 1; j++){
        if (i == 1 && j == 0) {
        printf("Cima \n");
        break;
        }
    }

    if(i == 1){
        printf("Direita \n");
    }

    
   printf("\n");
}

   return 0;

}
    
    
