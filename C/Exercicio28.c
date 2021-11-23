//Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez.
// Entre as tabuadas, solicitar que o usuário pressione uma tecla.

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]){
  int valor, resultado;
 
  printf("------ Tabuada de um a vinte------ ");

   valor=1;


for (int valor=1; valor <= 20; valor++){

          for (int i=0; i <= 10; i++){
              resultado = valor * i;
              printf("%i x %i = %i\n", valor, i, resultado);
              }
        printf ("\nPressione uma tecla para continuar a tabuada");
        getch();
   }
    
 
  return 0;
}