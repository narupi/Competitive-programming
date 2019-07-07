a, b = map(int, input().split())

ans = 0
for i in range(2):
    ans += max(a, b)
    if max(a, b) == a:
        a -= 1
    else :
        b -= 1

print(ans)
