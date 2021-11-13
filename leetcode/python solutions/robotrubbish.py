def doesCircleExist(commands=["G","L"]):
    ans=[]
    for command in commands:
        if command=="G":
            ans.append("NO")
            continue
        if command=="R" or command=="L":
            ans.append("YES")
            continue
        cache={
            "NR":"E",
            "NL":"W",
            "ER":"S",
            "EL":"N",
            "SR":"W",
            "SL":"E",
            "WR":"N",
            "WL":"S"
        }
        curr_cord=[0,0]
        for i in range(4):
            for j in range(len(command)):
                if i ==0and j ==0:
                    facing="N"
                if command[j]=="R":
                    facing=cache[facing+"R"]
                elif command[j]=="L":
                    facing=cache[facing+"L"]
                elif command[j]=="G":
                    if facing=="N":
                        curr_cord[1]+=1
                    elif facing == "S":
                        curr_cord[1]-=1
                    elif facing == "E":
                        curr_cord[0]+=1
                    elif facing == "W":
                        curr_cord[0]-=1
        if curr_cord[0]==0 and curr_cord[1]==0:
            ans.append("YES")
            continue
        else:
            ans.append("NO")
            continue
    return ans
print(doesCircleExist())