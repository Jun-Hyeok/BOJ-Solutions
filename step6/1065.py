def ishansu(X):
    if X // 100:
        return 1 if X // 100 + X % 10 == 2 * (X % 100 // 10) else 0
    else:
        return 1


N = int(input())
cnt = 0
for x in range(1, N + 1):
    cnt += ishansu(x)
print(cnt)