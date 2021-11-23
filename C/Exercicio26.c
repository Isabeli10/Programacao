//Tabuada de um número qualquer 


int main(int argc, char *argv[]){
  int valor, resultado;
 
  printf("Digite um numero para tabuada: ");
  scanf("%i", &valor);
 
  while(valor <= 0){
    printf("Erro! Somente numeros positivos. Digite novamente: ");
    scanf("%i", &valor);
  }
 
  for (int i=1; i <= 10; i++){
    resultado = valor * i;
    printf("%i x %i = %i\n", valor, i, resultado);
  }
 
  return 0;
}

