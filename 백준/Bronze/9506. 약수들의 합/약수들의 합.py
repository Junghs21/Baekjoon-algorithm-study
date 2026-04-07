while True:
    n = int(input())
    arr = []
    i = 0
    
    if(n == -1):
        break
    else:
        while(i != n):
            i += 1
            
            if(n % i == 0):
                arr.append(i)
                
            
        if(sum(arr[:-1]) == n):
            print(f"{n} = {' + '.join(map(str, arr[:-1]))}")
        else:
            print(f"{n} is NOT perfect.")
