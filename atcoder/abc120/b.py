a, b, k = map(int, input().split())
l = []
n = 1
while True:
    if a%n == 0 and b%n == 0:
        l.append(n)
    elif a < n or b < n:
        break
    n += 1

print(l[-k])
