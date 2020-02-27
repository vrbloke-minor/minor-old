#string_bits

def string_bits(str):
  res = ""
  for i in range(len(str)):
    res += "" if i % 2 else str[i]
  return res

