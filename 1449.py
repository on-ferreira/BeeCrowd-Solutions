T = int(input())

for i in range(T):
  M,N = map(int,input().split())
  dic = {}
  for j in range(M):
    Mjap = input()
    Mport = input()
    dic[Mjap] = Mport
  for j in range(N):
    musica = input()
    linha = []
    for k in musica.split():
      if k in dic:
        linha.append(dic.get(k))
      else:
        linha.append(k)
    print(*linha)
  print('')
