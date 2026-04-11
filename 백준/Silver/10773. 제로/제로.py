k = int(input())
arr = []

for _ in range(k):
    num = int(input())
    
    if(num == 0):
        if(len(arr) == 0):
            pass
        else:
            arr.pop()
    else:
        arr.append(num)
        
print(sum(arr))