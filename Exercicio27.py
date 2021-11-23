num = int(input("Digite um numero para obter a tabuada: "))

while(num <= 0):
    print("Não pode numero negativo!")
    num = int(input("Digite um outro numero para obter a tabuada: "))

a = int(input("Digite o valor que inicia a tabuada: "))
b = int(input("Digite o valor que finaliza a tabuada: "))
 

while(a > b):
    print("O segundo número deve ser maior que o primeiro")
    b = int(input("Digite Novamente o segundo valor: "))

for i in range(b, a,-1):
    r = num * i
    print(f'{num} X {i} = {r}')
