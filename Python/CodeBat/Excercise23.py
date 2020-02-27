#combo_string

def combo_string(a, b):
  condition = len(a) - len(b) > 0 #a is longer than b
  strings = (a, b)
  return strings[condition] + strings[not condition] + strings[condition]
