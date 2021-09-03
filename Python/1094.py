# deu runtime error

X = int(input())
coelho, rato, sapo = 0, 0, 0

for i in range(0,X):
    c,t = input().split()
    str(t)
    if (t == 'C'):
        coelho += c
    if (t == 'R'):
        rato += c
    if (t == 'S'):
        sapo += c

total = coelho + rato + sapo

print('Total: %d cobaias' %total)
print('Total de coelhos: %d' %coelho)
print('Total de ratos: %d' %rato)
print('Total de sapos: %d' %sapo)
print('Percentual de coelhos: %.2f %%' %((coelho / total) * 100))
print('Percentual de ratos: %.2f %%' %((rato / total) * 100))
print('Percentual de sapos: %.2f %%' %((sapo / total) * 100))
