from math import factorial

n, k = map(int, input().split())
if n >= k:
    c = factorial(n) / (factorial(k) * factorial(n - k))
    print(int(c))
else:
    print("error: n < k")
