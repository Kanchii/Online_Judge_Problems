a = input()

def isPalindrome(word):
    if(len(word) % 2 == 0):
        mid = int(len(word) / 2)
        #print(word[:mid], word[mid:][::-1])
        return (word[:mid] ==  word[mid:][::-1])
    else:
        mid = int(len(word) / 2)
        #print(word[:mid], word[(mid + 1):][::-1])
        return (word[:mid] == word[(mid + 1):][::-1])

ok = 0
for k in range(len(a) + 1):
    for i in range(26):
        word = a[:k] + chr(ord('a') + i) + a[k:]
        #print(word)
        if(isPalindrome(word)):
            ok = 1
            print(word)
            break
    if(ok):
        break
if(not ok):
    print("NA")
