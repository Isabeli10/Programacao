#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  
  float c,f;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite uma temperatura em Celsius: ");
  scanf("%f", &c);
 
   // Faz a soma dos valores obtidos acima
  f = c + 273;

  // Exibe o resultado final
  printf("A temperatura em celsius e  %2.f", c);
  printf("\nE sua equivalente em Fahrenheit e %2.f", f);
 
  return 0;
} 