a = float(input('Digite o primeiro valor: '))
b = float(input('Digite o segundo valor:'))
c = float(input('Digite o terceiro valor:'))

if a+b>c and a+c>b and b+c>a:
    if a==b and b==c:
     print ("O triângulo é equilátero")
    elif a==b or b==c or a==c:
     print("O triângulo é isósceles")
    else:
     print("O triângulo é escaleno")
else:
   print("Não é um triângulo")
