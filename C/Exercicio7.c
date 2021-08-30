//#include <stdio.h>  - NÃO FIZ
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  
  float r,d;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite um valor em dolar: ");
  scanf("%f", &d);
 
   // Faz a soma dos valores obtidos acima
  r = d /5,38;

  // Exibe o resultado final
  
  printf("\nE sua equivalente em Celsius e %.2f", r);
 
  return 0;
} 