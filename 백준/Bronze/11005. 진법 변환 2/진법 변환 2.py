n, b = map(int, input().split())
arr = []

digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

while(n > 0):
    arr.append(digits[n % b])
    
    n = n // b
    
arr.reverse()

print(''.join(arr))