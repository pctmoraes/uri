a, g, d = 0, 0, 0
val = int(input())

while (val != 4):
    if (val == 1):
        a += 1
    elif (val == 2):
        g += 1
    elif (val == 3):
        d += 1
    val = int(input())

print('MUITO OBRIGADO')
print('Alcool: %i' %a)
print('Gasolina: %i' %g)
print('Diesel: %i' %d)
