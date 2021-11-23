#include <stdio.h>
 
int main(int argc, char *argv[]){
  float A, B, C;
  
  printf("\n Digite o tamanho do cateto1: ");
  scanf("%f", &A);
 
  printf("Digite o tamanho do cateto2: ");
  scanf("%f", &B);
 
  printf("Digite o tamanho da hipotenusa: ");
  scanf("%f", &C);
 
  
  if (C*C == B*B+A*A) {
      printf ("e um triangulo retangulo");
  }

 else {
 printf (" nao e um triangulo retangulo ");

 }

  return 0;
}
