x, y = map(int, input().split())
quadrante = []

while (x != 0 and y != 0):
    if (x > 0 and y > 0):
        quadrante.append(1) 
    elif(x < 0 and y > 0):
        quadrante.append(2)
    elif(x < 0 and y < 0):
        quadrante.append(3)
    elif(x > 0 and y < 0):
        quadrante.append(4)
    
    x, y = map(int, input().split())

for value in quadrante:
    if (value == 1):
        print('primeiro')
    elif(value == 2):
        print('segundo')
    elif(value == 3):
        print('terceiro')
    elif(value == 4):
        print('quarto')

