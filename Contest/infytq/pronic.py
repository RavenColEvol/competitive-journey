import math

# input
s = str(input())
ans = []
n = len(s)

i = 0
j = 0

def ispronic(n):
    if n == 0:
        return False
    v = int(math.sqrt(n))
    return v * (v + 1) == n

while i < n:
    j = 1
    while j < n - i + 1:
        v = int(s[i: i + j])
        if ispronic(v):
            ans.append(str(v))
        j += 1
    i += 1
    
if len(ans) == 0:
    print('-1')
else:
    ans = list(set(ans))
    ans.sort(key=int)
    op = ','.join(ans)
    print(op)