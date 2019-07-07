#n: id card
#m: gate
n, m = map(int, input().split())
data = [0 for i in range(n+1)]

for i in range(m):
    l, r = map(int, input().split())
    data[l-1] += 1
    data[r] -= 1

for i in range(n):
    data[i+1] += data[i]

print(data.count(m))
