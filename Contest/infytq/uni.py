n = int(input())
s = input()

arr = s.split(',')
ans = {}

for i in arr:
    if i in ans.keys():
        ans[i] += 1
    else:
        ans[i] = 1

count = 0

for key, val in ans.items():
    if int(key) < n and val == 1:
        count += 1

print(count)