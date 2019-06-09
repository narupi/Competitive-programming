cuisine = [int(input()) for _ in ' '*5]
time = [ ((a+9)//10*10)-a for a in cuisine ] 
print(sum(time) + sum(cuisine) - max(time))
