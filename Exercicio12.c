#include <stdio.h>
 
int main(int argc, char *argv[]){
  float base,altura,area;
  
  printf(" Digite o valor da altura:");
  scanf("%f", &altura);
 
  printf("Digite o valor da base: ");
  scanf("%f", &base);
 

 area = base*altura;

  if (area > 100){
      printf("Terreno grande");
  }

  return 0;
}
