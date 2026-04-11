t = int(input())

coins = [25, 10, 5, 1]
results = []

for _ in range(t):
    c = int(input())
    count = [0, 0, 0, 0]
    i = 0
    
    for coin in coins:
        count[i] = (c // coin)
        c = c % coin
        i += 1
        
    results.append(count)
    
for _ in results:
    print(*_)