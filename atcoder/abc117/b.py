n = int(input())
l = list(map(int, input().split()))
print('No' if sum(l)-max(l) <= max(l) else 'Yes')
