# deu runtime error

N = int(input())
vetor = []
pesos = [2.0, 3.0, 5.0]

for i in range(0,N):
    soma_pond = 0.0
    for k in range (0,3):
        X = float(input())
        soma_pond += X * pesos[k]
    vetor.append(soma_pond/sum(pesos))

for j in range(0,N):
    print('{:.1f}'.format(vetor[j]))