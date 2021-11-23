#include <stdio.h>
 
int main(int argc, char *argv[]){
  float A,B,C;
  
  printf("Digite o primeiro numero:");
  scanf("%f", &A);
 
  printf("Digite o segundo numero: ");
  scanf("%f", &B);

  printf("Digite o terceiro numero: ");
  scanf("%f", &C);
 


  if (A>B && A>C)
   {
      printf("O maior numero e: %1.f", A);
  }

   else if (B>C && B>A) {

       printf("O maior numero e: %1.f",B);
  }

  else {
      
       printf("O maior numero e: %1.f",C);
       }
     
     

  return 0;
}