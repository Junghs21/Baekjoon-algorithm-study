n, k = map(int, input().split())
arr = list(map(int, input().split()))

if(len(arr) != n):
    print("Invalid Input Size")
    
arr.sort()

print(arr[len(arr) - k])