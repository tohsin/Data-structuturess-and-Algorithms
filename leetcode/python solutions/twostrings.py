def twoStrings(s1="hi", s2="world"):
    isTrue=False
    cache={}
    for i in range(len(s1)):
        if s1[i]  not in cache:
            cache[s1[i]]=None
    for i in range(len(s2)):
        if s2[i] in cache:
            isTrue=True
            break
    if isTrue: 
        return "YES"
    else:
        return "NO"
print(twoStrings())