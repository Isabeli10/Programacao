// Armazenar dez valores na memória do computador.
// Após a digitação dos valores, criar uma rotina para ler os valores e achar e
// exibir o maior deles.
#include <stdio.h>

int main(int argc, char *argv[]){
  // Declarando e populando o vetor com 10 posições

  int numeros[10];
  int comparando;

  comparando=0;

  
  // Looping para popular o vetor
  printf("Digite  10 numeros:\n");
  
  
  for(int i=0; i<10; i++){
      scanf("%i", &numeros[i]);
  }
 
  // Exibir o maior número digitado 
  for(int i=0; i< 10; i++){
      if (numeros[i] >= comparando){
          comparando=numeros[i];
      }
  }
           
      printf ("O maior numero e : %i",comparando);
 
  return 0;
}
