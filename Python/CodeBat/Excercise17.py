#last2

def last2(str):
  tocount = str[len(str)-2:]
  counter = 0
  for i in range(len(str)-2):
    counter += str[i:i+2] == tocount
  return counter

