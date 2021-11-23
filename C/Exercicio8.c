#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  
  float peso,altura,resultado,IMC;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor do peso: ");
  scanf("%f", &peso);

  printf("Digite o valor da altura: ");
  scanf("%f", &altura);
 
 
   // Faz a soma dos valores obtidos acima
  resultado = altura * altura;
  IMC = resultado / peso;

  // Exibe o resultado final
  
  printf("\nO IMC equivale a %.2f", IMC);
 
  return 0;
} 