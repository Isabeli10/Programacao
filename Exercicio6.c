#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  
  float r,d,c;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"

  printf("Digite o valor da cotacao do dolar: ");
  scanf("%f", &c);

  printf("Digite um valor em dolar: ");
  scanf("%f", &d);
 
   // Faz a soma dos valores obtidos acima
  r = d * c;

  // Exibe o resultado final
  
  printf("\nO valor em reais e %2.f", r);
 
  return 0;
} 