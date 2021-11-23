#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int a, b, c, d,e, pagamento;
  float total, troco;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor do primeiro produto: ");
  scanf("%i", &a);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o valor do segundo produto: ");
  scanf("%i", &b);
 
// Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
  printf("Digite o valor do terceiro produto: ");
  scanf("%i", &c);

// Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
  printf("Digite o valor do quarto produto: ");
  scanf("%i", &d);

// Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "e"
  printf("Digite o valor do quinto produto: ");
  scanf("%i", &e);

// Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "pagamento"
  printf("Digite o valor pago: ");
  scanf("%i", &pagamento);

total = a+b+c+d+e;

troco = pagamento-total; 

 printf("O troco a ser recebido e de %2.f", troco);

  return 0;
} 