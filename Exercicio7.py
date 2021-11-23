p1 = float(input("Digite o valor do primeiro produto:"))
p2 = float(input("Digite o valor do segundo produto:"))
p3 = float(input("Digite o valor do terceiro produto:"))
p4 = float(input("Digite o valor do quarto produto:"))
p5 = float(input("Digite o valor do quinto produto:"))
 
total= p1+p2+p3+p4+p5
 
print(f"O total a pagar é: {total:.2f}")

pagamento = float(input("Digite o valor do pegamento : "))

troco = pagamento - total

print(f"O troco é de: R$ {troco:.2f}")
