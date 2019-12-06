def recursive_extended_euclidean(j, k):
    if j == 0: return k, 1, 0
    d, _x, _y = recursive_extended_euclidean(k % j, j)
    return d, _y, _x - k//j*_y

while 1==1:
	a, b = input("Check what numbers?")
	c, d, e = recursive_extended_euclidean(a, b)
	print("{0} = {1} * {2} + {3} * {4}".format(c, a, e, b, d))
