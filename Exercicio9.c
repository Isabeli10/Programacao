#include <stdio.h>
 
int main(int argc, char *argv[]){
  float v1, v2, m;
  
  printf("Digite o primeiro numero: ");
  scanf("%f", &v1);
 
  printf("Digite o segundo numero: ");
  scanf("%f", &v2);
 
 
  if (v1 > v2){
      printf("O maior numero é %.1f",v1);
  }
  else{
      printf ("O maior numero e %.1f",v2);
  }
  
  return 0;
}
