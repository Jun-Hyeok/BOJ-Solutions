C = int(input())
for i in range(C):
    N, *scores = list(map(int, input().split()))
    avg = sum(scores) / N
    per = sum(int(score > avg) for score in scores) / N * 100
    print("%.3f%%" % per)
