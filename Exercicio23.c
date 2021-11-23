int main(int argc, char *argv[]){
  int n1,n2;
 //Dois valores na condição que o segundo seja maior que o primeiro
 
  printf("Digite o primeiro numero : ");
  scanf("%i", &n1);

   
  printf("Digite o segundo numero (ele deve ser maior que o primeiro) : ");
  scanf("%i", &n2);
 
 
  while(n2 < n1){
    printf("Erro! Apenas numeros maiores do que o primeiro valor digitado. Digite novamente: ");
    scanf("%i", &n2);

       }

    printf ("\n Valor correto. Obrigado!");
                                
return 0;
  }