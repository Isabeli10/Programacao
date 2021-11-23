altura = float(input('Digite a sua altura em (m): '))
 
peso = float(input('Digite o seu peso (em Kg): '))
 
imc = peso / (altura * altura)
 
if imc < 20:
    print("Abaixo do peso!")
elif imc >= 20 and imc < 25:
    print("Peso ideal!")
else:
    print("Acima do peso!")