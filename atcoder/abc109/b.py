N = int(input())
W = [input() for x in range(N)]
for i in range(1, N):
    if W[i] in W[:i] or W[i-1][-1] != W[i][0]:
        print('No')
        exit()
print('Yes')

