vet = []
stg = ''
val = int(input())

while (val != 0):
    vet.append(val)
    val = int(input())

for i in vet:
    for j in range(1,i+1):
        stg += str(j)
        if (j != i+1):
            stg += ' '
    print(stg[:-1])
    stg = ''

