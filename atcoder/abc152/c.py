N = int(input())
P = list(map(int, input().split()))
ans = 0 
min=2*100000

for i in range(N):
    now = P[i]
    if now <= min:
        ans += 1
        min = now

print(ans)
