n = int(input())
h = list(map(int, input().split()))

ans = 0
flag = True
for i in reversed(range(n)):
    flag = True
    for j in range(i):
        if h[i] < h[j]:
            flag = False
       
    if flag:
        ans += 1

print(ans)
