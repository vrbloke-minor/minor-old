#string_match

def string_match(a, b):
  counter = 0
  for i in range(len(a if a > b else b) - 1):
    counter += a[i:i+2] == b[i:i+2]
  return counter

