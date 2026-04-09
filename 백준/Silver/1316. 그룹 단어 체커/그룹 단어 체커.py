n = int(input())
answer = 0

for _ in range(n):
    word = input()
    ok = True
    pos = 0

    while(pos < len(word)):
        checker = pos + 1

        while(checker < len(word)) and (word[checker] == word[pos]):
            checker += 1

        for i in range(checker, len(word)):
            if(word[i] == word[pos]):
                ok = False
                
                break

        if not ok:
            break

        pos = checker

    if ok:
        answer += 1

print(answer)