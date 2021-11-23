#include <stdio.h>
#include <conio.h>
// Sequência olhar!!!


int main(int argc, char *argv[]){
  int a, b, c;
 
 a=1;
  b=1;

 printf ("%i", a);
printf ("\n%i", b);

 for (int i=0; i<=8; i++){
  c = a + b;
  a = c + b;
  b = a + c;

  printf( "\n%i\n%i\n%i", c,a,b);
  }
 c = a + b;
 printf( "\n%i", c);


      return 0;
}