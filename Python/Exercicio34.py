numeros =  []
comparando = 0 

for i in range(0, 10, 1):
    x = int(input('Digite dez numeros: '))
    numeros.append(x)

for i in range(0,10,1):
   if (numeros[i]>= comparando):
    comparando = numeros [i]


print(comparando)

 
