i,j = 0, 1
w,y = 0.2, 1.2

while(i <= 2):
    for x in range(0,3):
        print('I={} J={}'.format(i,j))
        j -= 1
    i += 2
    j = 7