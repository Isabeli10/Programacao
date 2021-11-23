num1 = int(input("Digite o primeiro número: "))
 
num2 = int(input("Digite o segundo número (deve ser maior que o primeiro): "))

while(num1 > num2):
    print("O segundo número deve ser maior que o primeiro")
    num2 = int(input("Digite Novamente o segundo valor: "))

print ("Obrigada!")