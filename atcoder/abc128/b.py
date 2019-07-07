n = int(input())
src = []

for i in range(n):
    s, p = input().split()
    src.append((s, -int(p), i + 1))

src.sort()
for item in src:
    print(item[2])

