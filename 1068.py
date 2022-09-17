def ChecarParenthesis(s):
  ct = 0
  for i in range(len(s)):
    if(s[i] == '('):
      ct+=1
    elif(s[i] == ')'):
      ct -= 1
      if(ct<0):
        return False
    else:
      ct += 0
  if(ct != 0):
    return False
  return True;
  

while(True):
  try:
    S = input()
    if(ChecarParenthesis(S)):
      print('correct')
    else:
      print('incorrect')
  except EOFError:
    break
