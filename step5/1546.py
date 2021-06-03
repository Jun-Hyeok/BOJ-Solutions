N = int(input())
scores = list(map(int, input().split()))
M = max(scores)
print(sum([score / M * 100 for score in scores]) / N)
