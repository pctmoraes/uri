inter, gremio, empate = 0, 0, 0
opcao = 1

while(opcao != 2):
    if(opcao == 1):
        i, g = map(int, input().split())
        if(i > g):
            inter += 1
        elif(i < g):
            gremio += 1
        elif(i == g):
            empate += 1
    print('Novo grenal (1-sim 2-nao)')
    opcao = int(input())

print('%i grenais'%(inter+gremio+empate))
print('Inter:%i'%inter)
print('Gremio:%i'%gremio)
print('Empates:%i'%empate)

if((inter > gremio) and (inter > empate)):
    print('Inter venceu mais')
elif((gremio > inter) and (gremio > empate)):
    print('Gremio venceu mais')
else:
    print('Nao houve vencedor')
        
