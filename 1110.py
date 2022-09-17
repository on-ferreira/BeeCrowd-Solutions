N = int(input())
while(N !=0):
  descartadas=[]
  baralho = []
  for i in range(N,0,-1):
    baralho.append(i)
  for i in range(N-1):
    descartadas.append(baralho.pop())
    baralho.insert(0,baralho.pop())
  
  print("Discarded cards: ", end = '')
  for i in range(len(descartadas)):
    if(i!=len(descartadas)-1):
      print(descartadas[i],end =', ')
    else:
      print(descartadas[i],end='')
  print()
  print("Remaining card:", baralho[0])
  N = int(input())
