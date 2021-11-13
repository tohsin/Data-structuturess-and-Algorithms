def sherlockAndAnagrams(s="ifailuhkqq"):
    cache,count={},0
    for i in range(len(s)):
        for j in range(i,len(s)):
            fset = ''.join(sorted(s[i:j + 1]))
            if fset in cache:
                a=cache[fset]
                count+=a
                cache[fset]+=1
            else:
                cache[fset]=1
    return count
print(sherlockAndAnagrams())