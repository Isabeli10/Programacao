a=1 
impares=1 
i=0

N = float(input('Digite a quantidade de numeros que serão somados: '))

while (N<=0 or N>=100):
 N = float(input('Erro! Apenas numeros positivos. E menores que 100:'))

while (i<N):
    a = impares+ a 
    print (a)
    impares = impares+2 
    i= i+1 


