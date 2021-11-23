int main(int argc, char *argv[]){
  char sexo;
 //Qual o sexo?
 
  printf("Digite o seu sexo (M/F) : ");
  scanf("%s", &sexo);

 
  while ((sexo !='M') && (sexo !='F')){
    printf("Incorreto! Valido apenas M ou F. Digite novamente: ");
    scanf("%s", &sexo);

       }

    printf ("\n Obrigado!");
                                
return 0;
  }