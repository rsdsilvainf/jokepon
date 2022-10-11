#include <stdio.h>
 int main(){
   //escolha do jogador
   int escolha_jogador, escolha_computador;
   do{
   printf("1 pedra, 2 papel, 3 tesoura\n");
   printf("escolha uma opçao:\n");
    scanf("%d",&escolha_jogador);
     if(escolha_jogador < 1 || escolha_jogador > 3)
     printf("você digitou uma opção inválida :\n\n");
     } while(escolha_jogador < 1 || escolha_jogador > 3);
     
   if(escolha_jogador == 1)
   printf("vc escolheu pedra:\n\n");
   if(escolha_jogador == 2)
   printf("vc escolheu papel:\n\n");
   if(escolha_jogador == 3)
   printf("vc escolheu tesoura\n\n") ;

   //escolha do computador

    srand(time(NULL));
  escolha_computador=("%d",rand()%3+1);
   if(escolha_computador == 1){
     printf("O computador escolheu pedra:\n\n");}
   if(escolha_computador == 2){
     printf("O computador escolheu papel:\n\n");}
   if(escolha_computador == 3){
   printf("O computador escolheu tesoura:\n\n");}

   //resultado
   if(escolha_jogador == escolha_computador){
     printf("Empate");}
     
   if(escolha_jogador ==1 && escolha_computador == 3) 
      printf("você ganhou");
   if  (escolha_jogador == 2 && escolha_computador ==1)
      printf("você ganhou");
    if   (escolha_jogador ==3 && escolha_computador ==2)
     printf("você ganhou");
     
   else{
   if(escolha_jogador ==3 && escolha_computador == 1)
     printf("voçê perdeu");
   if  (escolha_jogador == 1 && escolha_computador ==2)
     printf("voçê perdeu");
    if   (escolha_jogador == 2 && escolha_computador ==3)
     printf("voçê perdeu");}
    
   }
   
      
    
   
   