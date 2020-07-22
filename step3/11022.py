T = int(input())
for i in range(T):
    A, B = [int(i) for i in input().split()]
    # A, B = map(int, input().split())
    print(f"Case #{i + 1}: {A} + {B} = {A + B}")
