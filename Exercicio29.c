#include <stdio.h>
#include <conio.h>
// Exibir a soma dos números inteiros positivos do intervalo de um a cem.

int main(int argc, char *argv[]){
  int valor, resultado;
 
    valor=0;

          for (int i=0; i <=100; i++){
              resultado = valor + i;
              valor=resultado;
              }

    printf("A soma dos numeros inteiros no intervalo de 1 a 100 e %i", resultado);

      return 0;
}