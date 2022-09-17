linha = input()
vogais = ['a','e','i','o','u']
aux = ''

for i in range(len(linha)):
  if (linha[i] in vogais):
    aux += linha[i]


if (aux == aux[::-1]):
  print('S')
else:
  print('N')
