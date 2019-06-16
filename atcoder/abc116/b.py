s = int(input()) 
i = 2
while s > 1:
    s = [s//2, s*3+1][s%2]
    i+=1
print(max(i,4))
