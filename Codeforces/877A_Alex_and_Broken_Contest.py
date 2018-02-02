a = input()

vet = ['Danil', 'Olya', 'Slava', 'Ann', 'Nikita']

res = []
for k in vet:
	res.append(a.count(k))

ok = True
um = False
for l in res:
	if((l and um) or (l > 1)):
		ok = False
	elif(l):
		um = True
if(ok and um):
	print("YES")
else:
	print("NO")