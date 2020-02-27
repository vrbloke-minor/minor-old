#not_string

def not_string(str):
  return str if str[0:3] == "not" else "not " + str 
