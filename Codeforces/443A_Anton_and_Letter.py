a = input()
a = a[1:(len(a) - 1)]
a = a.replace(' ', '').split(',')

if(a == ['']):
	print(0)
else:
	print(len(set(a)))
