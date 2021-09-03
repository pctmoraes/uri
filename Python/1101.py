vetorMin, vetorMax = [], []
posicao, cont = 0, 0
string = ''

M, N = map(int, input().split())

while(M > 0 and N > 0):
    if (M < N):
        vetorMin.append(M)
        vetorMax.append(N)
    else:
        vetorMin.append(N)
        vetorMax.append(M)
    cont += 1
    M, N = map(int, input().split()) 

while (cont != posicao):
    soma = 0
    string = ''
    for i in range(vetorMin[posicao], (vetorMax[posicao] + 1)):
        string += str(i) + ' '
        soma += i
    string += 'Sum=' + str(soma)
    print(string)
    posicao += 1
