n = int(input())
l = sorted([list(map(int, input().split())) for _ in range(n)], key = lambda x: -x[2])

for cx in range(101):
    for cy in  range(101):
        h = l[0][2] + abs(l[0][0] - cx) + abs(l[0][1] - cy)
        for i in l[1:]:
            if max(h - abs(i[0] - cx) - abs(i[1] - cy), 0) != i[2]:
                break
        else:            
            print(cx,cy,h)
            exit()


