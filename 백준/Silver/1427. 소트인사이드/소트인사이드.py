n = input()
arr = list(n)

arr.sort(reverse=True)

for _ in arr:
    print(_, end="")