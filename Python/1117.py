notas = []

while(len(notas) < 2):
    n = float(input())
    if(n < 0 or n > 10):
        print('nota invalida')
    else:
        notas.append(n)

media = (sum(notas) / 2)
print('media = %.2f' %media)