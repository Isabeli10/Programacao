a = float(input('Digite o primeiro valor: '))
 
b = float(input('Digite o segundo valor:'))

 
if a > b:
     print(f"O maior número é {a:.2f}")
elif b > a:
     print(f"O maior número é {b:.2f}")
else:
    print("Os números são iguais")