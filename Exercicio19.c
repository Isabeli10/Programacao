#include <stdio.h>
 
int main(int argc, char *argv[]){
  float tempo,aceleracao, v0, velocidade,resultado;
  
  
  printf ("Digite o valor da aceleracao: ");
  scanf("%f", &aceleracao);
 
 printf("\n Digite o tempo: ");
  scanf("%f", &tempo);

 printf("\n Digite a velocidade inicial: ");
  scanf("%f", &v0);

  resultado=(v0 +(aceleracao*tempo));


velocidade=resultado*3.6;


if (velocidade<=40){

    printf ("\n Veiculo muito lento");
}

else if (velocidade>40 && velocidade<=60){

    printf ("\n Velocidade permitida");
}

 else if (velocidade>60 && velocidade<=80){

    printf ("\n Velocidade de cruzeiro");
}
else if (velocidade>80 && velocidade<=120){

    printf ("\n Veiculo rapido");
}

else {

    printf ("\n Veiculo muito rapido");
}


  return 0;
}