a = input()
lc = sum(1 for c in a if c.islower())
uc = sum(1 for c in a if c.isupper())
if(lc >= uc):
	print(a.lower())
else:
	print(a.upper())