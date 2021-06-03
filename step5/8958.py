T = int(input())
for i in range(T):
    res = input().split("X")
    print(sum(sum(range(len(elem) + 1)) for elem in res))
    # res = input()
    # score = 0
    # total = 0
    # for j in range(len(res)):
    #     if res[j] == "X":
    #         score = 0
    #     else:
    #         score += 1
    #     total += score
    # print(total)
