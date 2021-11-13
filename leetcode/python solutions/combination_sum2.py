def combo(candidates,target):
    candidates.sort()
    result=[]
    def dfs(i,cache,targets):
        if targets==0:
            result.append(cache.copy())
            return
        if targets<0:
            return

        for i in range(i,len(candidates)):
            if candidates[i] >target:break
            cache.append(candidates[i])
            dfs(i,cache,targets-candidates[i])
            cache.pop()
    dfs(0,[],target)
    return result
print(combo([2,3,6,7],7))