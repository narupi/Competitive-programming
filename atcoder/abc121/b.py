N, M, C = map(int, input().split())
B = list(map(int, input().split()))
ans = 0
for _ in range(N):
    A = map(int, input().split())
    ans += sum(a * b for a, b in zip(A,B)) + C > 0
print(ans)
