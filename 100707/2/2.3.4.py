import math

a, b = map(int, input().split())
c = math.sqrt(a * a + b * b)
print(round(c, 2))
