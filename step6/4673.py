l=[]
for n in range(1,10001):
    if n in l:
        pass
    else:
        print(n)
    l.append(n + sum([int(i) for i in str(n)]))