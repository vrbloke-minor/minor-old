#front_times

def front_times(str, n):
  return str[0:3] * n if len(str) > 3 else str * n
