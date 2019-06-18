n = int(input())
t, a = map(int, input().split())
ans = 0
temperature = 1000000000000000
tmp = 0
H = list(map(int, input().split()))
for i in range(n):
    tmp = t - H[i] * 0.006
    if abs(a - tmp) < abs(a - temperature):
        temperature = tmp
        ans = i
        

print(ans+1)
