#n : switch
#m : light
n, m = map(int, input().split())
s = [list(map(int, input().split())) for _ in range(m)]
p = list(map(int, input().split()))
 
ans = 0
  
#generate all n-bit patern
for i in range(2 ** n):
    #generate pattern(i)
    pattern = bin(i)[2:].rjust(n, '0')
    flag= True
    #print(pattern)
    #print(type(pattern))
    for j in range(m):
        #count on-state
        tmp = 0
        for k in range(1, s[j][0] + 1):
            if pattern[s[j][k] - 1] == "1":
                tmp += 1
            
        if tmp % 2 != p[j] % 2:
            flag = False
            
    if flag:
        ans += 1

print(ans)
