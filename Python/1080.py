vetor = []

for i in range(0,100):
    X = int(input())
    vetor.append(X)

maior = max(vetor)

for i in range(0,100):
    if (vetor[i] == maior):
        print(maior)
        print(i+1)


