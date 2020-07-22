import sys

T = int(sys.stdin.readline().rstrip())
for i in range(T):
    A, B = sys.stdin.readline().rstrip().split()
    print(int(A) + int(B))
# while T:
#     A, B = sys.stdin.readline().rstrip().split()
#     print(int(A) + int(B))
#     T -= 1
