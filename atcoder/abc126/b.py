s = input()

left = int(s[:2])
right = int(s[2:])

ans = "NA"

if 0 < left <13:
    if 0 < right < 13:
        ans = "AMBIGUOUS"
    else:
        ans = "MMYY"
else :
    if 0 < right < 13:
        ans = "YYMM"



print(ans)
