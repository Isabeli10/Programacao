//Armazenar vinte valores em um vetor.
// Após a digitação, entrar com uma constante multiplicativa que 
//deverá multiplicar cada um dos valores do vetor e 
//armazenar o resultado no próprio vetor, na respectiva posição.

int main(int argc, char *argv[]){
  // Declarando e populando o vetor com 10 posições

  int numeros[20];
  int constante;

  constante = 5;
  
  // Looping para popular o vetor
  printf("Digite 20 numeros:\n");
  
  
  for(int i=0; i<20; i++){
      scanf("%i", &numeros[i]);
  }

  printf("Os numeros digitados multiplicados por 5 sao \n");
   for(int i=0; i<20; i++){
      numeros[i] = constante * numeros [i];
        printf("%i\n", numeros[i]);
      }
 
  return 0;
}

