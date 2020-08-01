N = int(input())
Ntemp = N
cnt = 0
while True:
    cnt += 1
    N = N % 10 * 10 + (N // 10 + N % 10) % 10
    if N == Ntemp:
        break
print(cnt)
