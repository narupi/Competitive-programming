N, T = map(int, input().split())
c = [0] * N
t = [0] * N

for i in range(N):
    c[i], t[i] = map(int, input().split())

dicts = {key:value for key, value in zip(c, t)}
dicts = sorted(dicts.items())
for key, value in dicts:
    if value <= T:
        print(key)
        exit()

print('TLE')
