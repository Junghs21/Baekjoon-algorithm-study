while(True):
    sen = input()
    left = []
    flag = 0
    
    if(sen == '.'):
        break

    for n in range(len(sen)):
        if(sen[n] == '(') or (sen[n] == '['):
            left.append(sen[n])
        elif(sen[n] == ')'):
            if(len(left) != 0) and (left[-1] == '('):
                left.pop()
            elif(len(left) != 0) and (left[-1] == '['):
                flag = -1
                
                break
            elif(len(left) == 0):
                flag = -1
        elif(sen[n] == ']'):
            if(len(left) != 0) and (left[-1] == '['):
                left.pop()
            elif(len(left) != 0) and (left[-1] == '('):
                flag = -1
                
                break
            elif(len(left) == 0):
                flag = -1
            
    if(len(left) == 0) and (flag == 0):
        print("yes")
    else:
        print("no")