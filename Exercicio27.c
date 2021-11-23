//Tabuada de um número qualquer

int main(int argc, char *argv[]){
  int valor, resultado,A ,B ;
 
  printf("-----Tabuada descrescente------ ");
  printf("\nDigite um numero para tabuada: ");
  scanf("%i", &valor);

    while(valor <= 0){
    printf("Erro! Somente numeros positivos. Digite novamente: ");
    scanf("%i", &valor);}
 
  printf("Digite o menor valor a ser multiplicado na tabuada: ");
  scanf("%i", &A);

  printf("Digite o maior valor a ser multiplicado na tabuada: ");
  scanf("%i", &B);

  while(B <= A){
    printf("O segundo valor deve ser maior que o primeiro. Digite novamente o segundo valor: ");
    scanf("%i", &B);

  }
 
  for (int i=B; i >= A; i--){
    resultado = valor * i;
    printf("%i x %i = %i\n", valor, i, resultado);
  }
 
  return 0;
}