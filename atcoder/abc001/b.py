m = int(input())/1000
vv = 0
if m>70:
    vv=89
elif m>=35:
    vv=(m-30)/5+80
elif m>=6:
    vv=m+50
elif m>=0.1:
    vv=m*10
else:
    vv=0
print("{0:02d}".format(int(vv)))
