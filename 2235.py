A,B,C = map(int,input().split())

if(A-B==0) or (A-C ==0) or (B-C ==0):
  print("S")
elif ((A+B)-C == 0) or ((A+C)-B == 0) or ((B+C)-A == 0):
  print("S")
else:
  print("N")
