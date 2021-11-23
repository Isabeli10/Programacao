a = float(input('Digite o primeiro valor: '))
b = float(input('Digite o segundo valor:'))
c = float(input('Digite o terceiro valor:'))

 
if a > b and a > c:
     print(f"O maior número é {a:.2f}")
elif b > a and b >c :
     print(f"O maior número é {b:.2f}")
else:
    print(f"O maior número é {c:.2f}")