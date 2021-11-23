// Armazenar vinte valores na memória. Após a digitação, 
//entrar com uma constante multiplicativa que deverá multiplicar
// cada um dos valores do vetor e armazenar o resultado em outro vetor, 
//porém em posições equivalentes. Exibir os vetores na tela.

int main(int argc, char *argv[]){
  // Declarando e populando o vetor com 10 posições

  int numeros[20];
  int novo [20];
  int constante;

  constante = 5;
  
  // Looping para popular o vetor
  printf("Digite 20 numeros:\n");
  
  
  for(int i=0; i<20; i++){
      scanf("%i", &numeros[i]);
  }

  printf("Numeros digitados /Multiplicados por 5  \n");
   for(int i=0; i<20; i++){
      novo[i] = constante * numeros [i];
        printf("%i   %i\n",     numeros[i],     novo[i]);
      }
 
  return 0;
}
