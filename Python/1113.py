vetorClasse = []

M, N = map(int, input().split())

while(M != N):
    if (M < N):
        vetorClasse.append(1)
    else:
        vetorClasse.append(0)

    M, N = map(int, input().split())

for i in vetorClasse:
    if (i == 1):
        print('Crescente')
    else:
        print('Decrescente')
