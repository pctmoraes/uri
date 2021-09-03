i,j,jota = 1,7,7

while(i <= 9):
    for x in range(0,3):
        print('I={} J={}'.format(i,j))
        j -= 1
    i += 2
    jota += 2
    j = jota