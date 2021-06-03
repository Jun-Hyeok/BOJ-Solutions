A = int(input())
B = int(input())
C = int(input())
num = A * B * C
cnt = [0 for i in range(10)]
while num // 10 != 0:
    cnt[int(num % 10)] += 1
    num //= 10
cnt[num] += 1
for i in range(10):
    print(cnt[i])
