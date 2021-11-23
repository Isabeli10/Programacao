// Exibir os vinte primeiros valores da série de Bergamaschi.
// A série: 1, 1, 1, 3, 5, 9, 17, ...

#include <stdio.h>
#include <conio.h>
//Declaração das variaveis 

int main(int argc, char *argv[]){
  int a, b, c, d;
  a=1;
  b=1;
  c=1;
  
//Restrição para os 20 primeiros números 

 for (int i=0; i<20; i++){
 
 //Definição da lógica 

 d = a + b + c;

   printf ("%i\n", a);
   a=b; 
   b=c; 
   c=d;
 }

      return 0;
}
