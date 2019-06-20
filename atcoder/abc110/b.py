N, M, X, Y = map(int, input().split())
x = max(list(map(int, input().split())))
y = min(list(map(int, input().split())))
print('War' if x >= y or Y <= x or X >= y else 'No War')
