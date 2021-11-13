def longestCommonPrefix(strs=["flower","flight","flow"]):
    mar=strs[0]
    for i in range(1,len(strs)):
        if len(mar)==0:break
        if 
        for j in range(0,len(strs[i])):
            if j <= len(mar)-1 and j <= len(strs[i])-1:
                if strs[i][j] == mar[j]:
                    mar=strs[0][0:j+1]
                else:
                    break
            else:
                mar=strs[0][0:j]
                break
    return mar

print(longestCommonPrefix())



# def longestCommonPrefix2(strs=["flower","flow","flight"]):
#     if len(strs)==1:
#         return ""
#     cache={}
#     for i in range(0,len(strs[0])):
#         cache[strs[0][0:i+1]]=len([strs[0][0:i+1]])
#     max_key = max(cache, key=cache.get)
#     p=1
#     b={}

# def tryish(s,word,cache,):
#     if word < len(s):
#         for i in range(0,len(s[x])):
#             if s[x][0:i+1] in cache:
#                 b[s[x][0:i+1]]=len(s[x][0:i+1])

#     return b


                




