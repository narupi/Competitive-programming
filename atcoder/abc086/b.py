import math
a,b = input().split()
a += b
print("Yes" if math.sqrt(int(a))%1==0 else "No")


