def get_yx(p):
    return (p[1], p[0])

n = int(input())
arr = []

for _ in range(n):
    x, y = map(int, input().split())
    
    arr.append((x, y))
    
arr.sort(key=get_yx)

for x, y in arr:
    print(x, y)