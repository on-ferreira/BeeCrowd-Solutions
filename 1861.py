Pessoas = {}

while True:
  try:
    linha = input()
    A = linha.split()[0]
    B = linha.split()[1]

    if A not in Pessoas:
      Pessoas[A] = [1,True]
    elif Pessoas[A][1] != False:
      Pessoas[A] = [Pessoas[A][0]+1,True]
    Pessoas[B] = [0,False]
    
  except EOFError:
    break

print('HALL OF MURDERERS')
for k in sorted(Pessoas):
  if Pessoas[k][1] == True:
    print(f'{k} {Pessoas[k][0]}')
