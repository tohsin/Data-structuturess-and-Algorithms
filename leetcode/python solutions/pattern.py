def wordPattern(pattern= "abba" ,str= "dog dog dog dog") -> bool:
    x = str.split(" ")
    i=0
    visited={}
    visited2={}
    pattern1=[]
    pattern2=[]
    for letter in pattern:
        if letter not in visited:
            visited[letter]=i
            pattern1.append(visited[letter])
            i+=1
        else:
            pattern1.append(visited[letter])
    i=0
    for word in x:
        index=0
        if word not in visited2:
            visited2[word]=i
            if visited2[word] != pattern1[index]:
                return False
            # pattern2.append(visited2[word])
            i+=1
        else:
            if visited2[word] != pattern1[index]:
                return False
            # pattern2.append(visited2[word])
        index+=1
    if pattern1==pattern2:
        return True
    else:return False
       

print(wordPattern())
    

