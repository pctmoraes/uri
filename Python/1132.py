soma = 0
x = int(input())
y = int(input())

if x > y or x == y:
    inicio = y
    fim = x
else:
    inicio = x
    fim = y

for i in range(inicio, (fim+1)):
    if(i % 13 != 0):
        soma += i

print(soma)