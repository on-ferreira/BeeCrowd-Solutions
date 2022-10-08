def Check(substring, string):
  flag = True
  posAtual = 0
  for i in range(len(substring)):
    if posAtual == -1:
      return False
    flag,posAtual = Busca(string,substring[i],posAtual)
  return flag
    

def Busca(string, letra, pos):
  for i in range(pos,len(string)):
    if string[i] == letra:
      return True, i+1
  return False, -1
  

N = int(input())
for i in range(N):
  S = input()
  Q = int(input())
  for j in range(Q):
    R = input()
    if(Check(R,S)):
      print("Yes")
    else:
      print("No")
