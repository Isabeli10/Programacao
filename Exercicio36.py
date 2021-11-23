numeros = [] 
novo = []

constante= 5

for i in range(0, 20, 1):
  x = int(input('Digite 20 numeros: '))
  numeros.append(x)

for i in range(0, 20, 1):
  n = constante * numeros [i]
  novo.append(n)

  print (f"{numeros [i]}, {novo [i]}")
