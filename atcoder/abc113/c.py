N, M = map(int, input().split())
PY = [list(map(int, input().split()))+[i] for i in range(M)]

count = [0] * N
ans = [""]*M


PY.sort(key = lambda x:x[1])
for p,_,i in PY:
    count[p-1] += 1
    ans[i] = str(p).zfill(6) + str(count[p-1]).zfill(6)

for a in ans:
    print(a)
