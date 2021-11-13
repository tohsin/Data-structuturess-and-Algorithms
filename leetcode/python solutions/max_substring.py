def maxSubstring(s="klrwqaozmixrpifeffeclhbvfukbyeqfqojwtwosileeztxwjl"):
    s_main=""
    result=[]
    for i in range(len(s)):
        for j in range(i+1,len(s)+1):
            result.append(s[i:j])
    result.sort()
    return result[-1]
print(maxSubstring())
