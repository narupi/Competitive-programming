def divc(num):
    count = 0
    for i in range(1, num+1):
        if num % i == 0:
            count += 1
    
    return count

n = int(input())
ans = 0
for i in range(1, n+1):
    if i % 2 != 0 and divc(i) == 8:
        ans += 1

print(ans)
