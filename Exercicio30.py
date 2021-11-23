a=1
b=1
c=0 

print (a)
print (b)

for i in range(1, 11, 1):
    c = a+b
    a= c+b
    b=a+c
    print (c)
    print (a)
    print(b)

c= a+b
print (c)