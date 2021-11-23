V0 = float(input('Digite a velocidade inicial (m/s): '))
 
aceleração = float(input('Digite o valor da aceleração (m/s²): '))

tempo = float(input('Digite o tempo (segundos): '))

velocidade = V0 + aceleração * tempo 

v = velocidade * 3.6

if v <= 40:
    print("Velocidade muito lento!")

elif v <= 60 and v>40:
    print("Velocidade permitida!")

elif v <= 80 and v > 60:
    print("Velocidade de cruzeiro!")

elif v <= 120 and v>80:
    print("Veiculo rápido!")

else:
    print("Veiculo muito rápido!")

