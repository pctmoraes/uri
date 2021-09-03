N = int(input())
vetor = []
soma = 0

for i in range(0,N):
    X, Y = map(int, input().split()) # scaneando duas variáveis digitadas em uma mesma linha pelo usuário
    
    if (X < Y):
        inicio, fim = X, Y
    else:
        inicio, fim = Y, X

    for number in range(inicio,fim-1):
        number += 1
        if (number % 2 != 0):
            soma += number
    vetor.append(soma)
    soma = 0

for value in vetor:
    print(value)
            