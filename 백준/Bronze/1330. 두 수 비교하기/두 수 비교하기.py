num = input().split()

if int(num[0]) > int(num[1]):
  print(">")
elif int(num[0]) < int(num[1]):
  print("<")
else :
  print("==")