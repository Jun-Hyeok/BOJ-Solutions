H, M = [int(i) for i in input().split()]
if M < 45:
    if H == 0:
        H = 24
    print(H - 1, M + 15)
else:
    print(H, M - 45)
