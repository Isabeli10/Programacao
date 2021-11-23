#include <stdio.h>
 
int main(int argc, char *argv[]){
  float peso,altura, IMC;
  char sexo;
  
  printf ("Digite o sexo (M/F): ");
  scanf("%s", &sexo);
 
 printf("\n Digite altura: ");
  scanf("%f", &altura);

 printf("\n Digite o peso: ");
  scanf("%f", &peso);

IMC= (peso/(altura*altura));

 
  if (sexo=='M') {
      if (IMC<20)
  { 
      printf ("Abaixo do peso"); 
      }

  else if (IMC<=20 && IMC<25){

      printf ("Peso ideal");
  }

  else 
  {
      printf ("Acima do peso");
  }

  }

  if (sexo=='F') {

  if (IMC <19)
  { 
      printf ("Abaixo do peso"); 
      }


  else if (IMC >=19 && IMC<24) {

      printf ("Peso ideal"); 
  }
  else
  {
      printf ("Acima do peso");
  }

  }


  return 0;
}