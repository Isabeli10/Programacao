#include <stdio.h>
 
int main(int argc, char *argv[]){
  int *numeros;
  int qtd, escolha, posicao;
  char tentativa;

  posicao=21;
  tentativa='S';

  printf("Digite a quantidade de numeros: ");
  scanf("%i", &qtd);

   while(qtd > 20){
    printf("Erro! Somente numeros menores do que 20. Digite novamente: ");
    scanf("%i", &qtd);
  }
 
  // O malloc reserva 100 blocos na memória e o ponteiro "numeros" aponta pra lá
  numeros = (int*)malloc(qtd*sizeof(int));
 
  printf("Digite os numeros: ");
  for(int i=0; i<qtd; i++){
      scanf("%i", &numeros[i]);
  }

  while (tentativa == 'S') {
    printf("Escolha um numero da sequencia digitada anteriormente: ");
    scanf("%i", &escolha);

     for(int i=0; i<qtd; i++){
       if (escolha == numeros[i]) {

           posicao=i+1;
       }     
     }
      if (posicao<20) {
      printf ("Esse numero se encontra na posicao %i", posicao);
      }
          
     else {

        printf ("Valor nao encontrado!");
     
  }
      printf ("\nDeseja pesquisar outro numero (S-Sim e N-Nao): ");
      scanf("%s", &tentativa);
     }

 printf ("\n Obrigada!");
     

    


    return 0;
}

