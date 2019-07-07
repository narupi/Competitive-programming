from fractions import gcd

N = int(input())
A = list(map(int, input().split()))

left = [0 for i in range(N+1)]
right = [0 for i in range(N+1)]

for i in range(N):
    left[i] = gcd(left[i-1], A[i])

for i in reversed(range(N)):
    right[i] = gcd(right[i+1], A[i])

ans = 1

for i in range(N):
    l = left[i-1]
    r = right[i+1]
    if gcd(l, r) > ans:
        ans = gcd(l, r)

print(ans)



