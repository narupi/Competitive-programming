s = input()
a=b=0
for i in s:
    if i in 'ATCG':
        a += 1
    else :
        b = max(a,b)
        a = 0

print(max(a,b))
