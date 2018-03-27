mapa = dict()
mapa['>'] = '1000'
mapa['<'] = '1001'
mapa['+'] = '1010'
mapa['-'] = '1011'
mapa['.'] = '1100'
mapa[','] = '1101'
mapa['['] = '1110'
mapa[']'] = '1111'

a = input()
res = ""
for c in a:
	res += mapa[c]
print(int(res, 2) % 1000003)
