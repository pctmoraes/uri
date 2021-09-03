stg = str(input())
pos = -1
vet1, vet2, vet3 = [], [], []

for i in stg:
    pos += 1
    if (i.isnumeric() and stg[pos-1].isalpha):
        vet1.append(pos)

