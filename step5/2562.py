num = []
for i in range(9):
    num.append(int(input()))
maximum = max(num)
print(maximum)
print(num.index(maximum) + 1)
