N = int(input())

for i in range(0,N):
    x, y = map(int, input().split())
    if(y == 0):
        print('divisao impossivel')
    else:
        print(x/y)
