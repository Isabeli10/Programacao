#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int base, altura; 
  float resultado;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite a base do triangulo: ");
  scanf("%i", &base);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite a altura do triangulo: ");
  scanf("%i", &altura);
 
  // Faz a soma dos valores obtidos acima
  resultado = ((base * altura/2));
 
  // Exibe o resultado final
  printf("A Area do triangulo de base %i e altura %i e igual a %.2f", base, altura, resultado);
 
  return 0;
}