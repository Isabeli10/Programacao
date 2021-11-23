#include <stdio.h>
 //Media curso regime semestral
int main(int argc, char *argv[]){
  float P1,P2,media;
  
  
  printf ("Digite o valor da primeira prova:");
  scanf("%f", &P1);
 
 printf("\n Digite o valor da segunda prova:");
  scanf("%f", &P2);

media = ((P1+(2*P2))/3);


if (media<5){

    printf ("\n Reprovado");
}

else {

    printf ("\n Aprovado");
}

  return 0;
}