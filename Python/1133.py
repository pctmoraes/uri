x = int(input())
y = int(input())

if x > y or x == y:
    inicio = y
    fim = x
else:
    inicio = x
    fim = y

for i in range((inicio+1), fim):
    if((i % 5 == 2) or (i % 5 == 3)):
        print(i)