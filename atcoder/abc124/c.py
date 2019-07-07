s = input()
res = s[0::2].count('0')+s[1::2].count('1')
print(min(res, len(s)-res))
