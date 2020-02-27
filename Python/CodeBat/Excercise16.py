#string_splosion

def string_splosion(str):
  res = ""
  for i in range(len(str)+1):
    res += str[0:i]
  return res

