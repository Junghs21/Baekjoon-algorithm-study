n, k = map(int, input().split())

arr = []
i = 1

while True:    
    if (n % i == 0):
        arr.append(i)
        
    if(len(arr) == k):
        print(i)
        
        break
    elif(n == i) and (len(arr) < k):
        print(0)
        
        break                
        
    i+=1