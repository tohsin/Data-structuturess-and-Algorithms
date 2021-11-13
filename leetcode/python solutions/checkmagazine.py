def checkMagazine(message=["two", "times", "three", "is", "not" ,"four"],
notes=["two", "times", "two" ,"is" ,"four"]):
    cache={}
    for i in range(len(message)):
        if message[i] in cache:
            cache[message[i]]+=1
        else:
            cache[message[i]]=1
        count+=1
    for i in range(len(notes)):
        if notes[i] in cache:
            if cache[notes[i]] == 0:
                return "No"
            else:
                cache[notes[i]]-=1
        else:
            return "No"
    return "Yes"

print(checkMagazine())