import collections as c
s=c.Counter(input())
t=c.Counter(input())
if sorted(s.values())==sorted(t.values()):
      print('Yes')
else:
      print('No')
