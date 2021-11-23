int main(int argc, char *argv[]){
  float peso,altura,imc;
  
  printf("Digite seu peso:");
  scanf("%f", &peso);
 
  printf("Digite sua altura: ");
  scanf("%f", &altura);

  imc = (peso/(altura*altura));


  if (imc < 20)
   {
      printf("Abaixo do peso");
  }

   else if (20<= imc && imc <25) {

       printf("Peso ideal");
  }

  else {
      
       printf("Acima do peso");
       }
     
     

  return 0;
}