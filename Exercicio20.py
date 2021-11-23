P1 = float(input('Digite a nota da primeira prova: '))
 
P2 = float(input('Digite a nota da segunda prova:'))

 
media = (P1+ (2*P2))/3
 
if media >= 5:
    print("Aprovado!")

else:
    print("Reprovado!")