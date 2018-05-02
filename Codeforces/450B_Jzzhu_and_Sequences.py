a, b = map(int, input().split())
x = (int(input()) - 1) % 6

v = [a, b]
for i in range(2, 6):
    v.append(v[i - 1] - v[i - 2])
print(v[x] % 1000000007)
