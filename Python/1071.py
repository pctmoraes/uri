X = int(input())
Y = int(input())

if (X < Y):
    inicio, fim = X, Y
else:
    inicio, fim = Y, X

soma = 0

for number in range(inicio,fim-1):
    number += 1
    if (number % 2 != 0):
        soma += number
print(soma)
