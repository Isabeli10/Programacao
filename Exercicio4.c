#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int a, b, c, d;
  float media;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro numero: ");
  scanf("%i", &a);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo numero: ");
  scanf("%i", &b);
 
// Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o terceiro numero: ");
  scanf("%i", &c);

// Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o quarto numero: ");
  scanf("%i", &d);

  // Faz a soma dos valores obtidos acima
  media = ((a*b*c*d)/4);
 
  // Exibe o resultado final
  printf("A média e igual a  %2.f", media);
 
  return 0;
}