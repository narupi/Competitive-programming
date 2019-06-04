n, a, b, c, d = map(int, input().split())

string = input()

if "##" in string[a-1:c] or "##" in string[b-1:d]:
    print("No")

elif c < d:
    print("Yes")

else :
    if "..." in string[b-2:d+1]:
        print("Yes")

    else :
        print("No")

    
