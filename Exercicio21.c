#include <stdio.h>
 //Quanto é necessario tirar na segunda prova
int main(int argc, char *argv[]){
  float P1,P2;
  
  
  printf ("Digite o valor da primeira prova:");
  scanf("%f", &P1);
 
 P2=((15-P1)/2);

 printf ("Para ser aprovado e necessario tirar na P2 : %.1f",P2);

  return 0;
}