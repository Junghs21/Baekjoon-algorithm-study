import sys

n = int(input())
arr = []

for _ in range(n):
    num = int(sys.stdin.readline())
    
    arr.append(num)
    
arr.sort()

for i in range(len(arr)):
    print(arr[i])
