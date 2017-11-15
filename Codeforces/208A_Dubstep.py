a = input().split('WUB')
res = ''
f = True
for i, k in enumerate(a):
	if k != '':
		if(not f):
			res += ' '
		else:
			f = False
		res += k
print(res)
