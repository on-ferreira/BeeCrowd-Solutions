import heapq

q = []
N,M = map(int,input().split())
resp = 0
v = input().split()
linhaM = input().split()
for i in range(N):
  heapq.heappush(q,(0,i))
for i in range(M):
  c = int(linhaM[i])
  aux = heapq.heappop(q)
  time = aux[0]+int(v[aux[1]])*c
  heapq.heappush(q,(time,aux[1]))
  resp = max(resp,time)

print(resp)
  
