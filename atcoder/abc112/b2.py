N,T = map(int, input().split())
L = list(tuple(map(int, input().split())) for _ in range(N))
print(min((c for c,t in L if t <= T), default ='TLE'))
