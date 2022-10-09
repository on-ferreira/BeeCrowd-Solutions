while(True):
  try:
    N,A = map(int,input().split())
    tiras = input().split()
    if N == 0 and A == 0:
      break
    for i in range(N):
      tiras[i] = int(tiras[i])
    tiras.sort(key=int, reverse=True)
    soma = 0
    vetSoma = []
    for i in range(N):
      soma += tiras[i]
      vetSoma.append(soma)
    tiras.sort()
    vetSoma.sort(key=int,reverse = True)
    corte = -1.0
    for i in range(N):
      x = (-A+vetSoma[i])/(N-i)
      if x <= tiras[i]:
        corte = x
        break
    if corte <0:
        print("-.-")
    elif corte == 0:
      print(":D")
    else:
      print("%.4f"%corte)
        
    
  except EOFError:
    break
