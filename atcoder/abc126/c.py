import math

n, k = map(int, input().split())

ans = 0

for i in range(1, n+1):
    if i >= k:
        ans += 1/n

    else :
        coin = math.ceil(math.log2(k/i))
        ans += (1/n)*(1/2)**(coin)


print(ans)
