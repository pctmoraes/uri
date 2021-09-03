vet = []
n = int(input())

while (n >= 0):
    vet.append(n)
    n = int(input())

media = sum(vet) / len(vet)
print("%.2f" %media)