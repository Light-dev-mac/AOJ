W, H, x, y, r = map(int, input().split())
if x>=r and x+r <= W and y>=r and y+r <= H:
    print('Yes')
else:
    print('No')