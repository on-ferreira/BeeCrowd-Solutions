while True:
  try:
    maior = 0
    dia = 0
    N = int(input())
    custoPorDia = int(input())
    receita = []
    receita.append(0)
    for i in range(1,N+1):
      receita.append(receita[i-1]+int(input())-custoPorDia)
    for i in range(1,N+1):
      for j in range(i):
        lucro = receita[i]-receita[j]
        maior = max(maior,lucro)
    print(maior)
    
  except EOFError:
    break
