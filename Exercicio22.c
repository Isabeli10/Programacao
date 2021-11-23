
int main(int argc, char *argv[]){
  int numero;
 //Digitar um numero positivo
 
  printf("Digite um numero positivo: ");
  scanf("%i", &numero);
 
 
  while(numero <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &numero);

       }

    printf ("\n O numero e positivo");
                                
return 0;
  }
