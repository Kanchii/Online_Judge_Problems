a = input()
b = input()

mapa = {}

def equals(a, b):
    #print(a, b)
    if(a == b):
        return 1
    if(len(a) % 2 != 0):
        return 0

    if((a,b) in mapa.keys()):
        return mapa[(a,b)];

    tamA = int(len(a) / 2)
    tamB = int(len(b) / 2)

    a1 = a[:tamA]
    a2 = a[tamA:]
    b1 = b[:tamB]
    b2 = b[tamB:]

    if((equals(a1, b1) and equals(a2, b2)) or (equals(a1, b2) and equals(a2, b1))):
        mapa[(a,b)] = 1
        return 1
    mapa[(a,b)] = 0
    return 0

if(equals(a, b)):
    print("YES")
else:
    print("NO")