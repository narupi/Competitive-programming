N,M = map(int, input().split())
x = sorted(map(int, input().split()))
diff = sorted([x[i+1]-x[i] for i in range(M-1)], reverse=True)
print(sum(diff[N-1:]))
