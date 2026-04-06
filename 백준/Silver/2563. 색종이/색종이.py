color_paper = [[0] * 100 for _ in range(100)]

n = int(input())

for _ in range(n):
    x, y = map(int, input().split())

    for row in range(y, y + 10):
        for col in range(x, x + 10):
            color_paper[row][col] = 1

area = 0

for row in color_paper:
    area += sum(row)

print(area)
