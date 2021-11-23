
//Tabuada do cinco

int main(int argc, char *argv[]){
  int numero, r;
 
numero= 5;
 
  for (int i=0; i <= 10; i++){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
  }
 
  return 0;
}
