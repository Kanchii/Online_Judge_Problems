a = input()
numbers = []
for i in range(10):
    numbers.append(input())

res = ""
for i in range(0, len(a), 10):
    k = a[i:i+10]
    for idx, num in enumerate(numbers):
        if(k == num):
            res += str(idx)
print(res)