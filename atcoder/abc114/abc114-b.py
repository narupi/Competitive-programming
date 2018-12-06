s = input();
char_list = list(str(s))
N = 753
mini = 100000

for i in range(len(char_list)-2):
    temp = int(char_list[i]+char_list[i+1]+char_list[i+2])

    if mini > abs(N - temp) :
        mini = abs(N - temp)


print(mini)

