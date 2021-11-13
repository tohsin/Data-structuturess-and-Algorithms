def lengthOfLastWord(s="b   a    "):
    # "b   a    "
        if len(s)==0:
            return 0
        x=[]
        cache=''
        for i in range(len(s)):
            val=s[i]
            if len(cache)> 0 and s[i]==' ':
                x.append(cache)
                cache=""
            
            elif s[i] != ' ':
                cache=cache +s[i]
        if len(cache)> 0:
                x.append(cache)
            
        if len(x)==0:return 0
        return len(x[-1])
print(lengthOfLastWord())