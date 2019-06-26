a, b, c = map(int, input().split())
if a >= 0 and a < b and b < c and c <= 100:
    print('Yes')
else:
    print('No')