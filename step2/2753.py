yr = int(input())
# print(int((yr % 4 == 0 and yr % 100 != 0) or yr % 400 == 0))
if (yr % 4 == 0 and yr % 100 != 0) or yr % 400 == 0:
    print(1)
else:
    print(0)
