t = input()
for i in range(t):
  s = raw_input().split()
  print int(str(int(s[0][::-1]) + int(s[1][::-1]))[::-1])
