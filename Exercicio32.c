// Calcular e exibir a soma dos “N” primeiros valores da seqüência abaixo.
// O valor “N” será digitado, deverá ser positivo, mas menor que cem.
// Caso o valor não satisfaça a restrição, enviar mensagem de erro e solicitar o valor novamente.
//A seqüência: 2, 5, 10, 17, 26, ....

#include <stdio.h>
#include <conio.h>
//Declaração das variaveis 

int main(int argc, char *argv[]){
  int a, impares, N;
  a=1;
  impares=1;
  
  printf("Digite a quantidade de numeros que serao somados na sequencia: ");
  scanf("%i", &N);

  while(N <= 0 || N>100){
    printf("Erro! Somente numeros positivos. E menores do que 100: ");
    scanf("%i", &N);
    }

  for (int i=0; i<N; i++){
      a = impares + a;
      printf("%i\n",a); 

      impares = impares + 2;


  }

       return 0;
}