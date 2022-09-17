n = int(input());
for a in range(n):
  frase = input().split()
  frase.sort(key=lambda x: len(x),reverse=True)
  for x in range(len(frase)):
    if(x!=len(frase)-1):
      print(frase[x], end = ' ')
    else:
      print(frase[x],end = '')
  print()
