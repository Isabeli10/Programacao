numeros = []
n=0 
valor= 0 
posição=0 
novamente ='S'

N = int(input('Digite a quantidade de valores que serão armazenados no vetor:'))

if(N<=0 or N>20):
 N = int(input('Erro! Apenas numeros positivos. E até 20:'))


for i in range(0, N, 1):
  x = int(input(f'Digite {N} numeros :'))
  numeros.append(x)

while(novamente =='S'):

      valor  = int(input('Digite um número para identificar a posição que ele ocupa no vetor: '))

      for i in range(0,N, 1):
        if (valor == numeros[i]):
            posição= i
            print (f'A posição ocupada no vetor é {posição}:')
            novamente ='G'
            break
      else:
            print ('Valor não encontrado!')

      novamente = (input('Deseja saber a posição de outro número (S-sim) e (N -não):'))

 




