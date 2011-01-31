#!/usr/bin/python
import cProfile
import pstats
def main():
  t = input()
  for i in range(t):
    n = raw_input()
    done = False
    while not done:
      n = str(int(n)+1)
      if (n == n[::-1]):
        done = True
    print n


main()
