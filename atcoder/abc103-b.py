import sys

a = input()
b = input()

for i in range(len(a)):
    temp = a[:1]
    a = a[1:]
    a = a+temp
    if a == b:
        print("Yes")
        sys.exit()

print("No")


