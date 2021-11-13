
def recursivehelper(candidates ,index,target,cache,result):
    if target==0:
        copy=cache.copy()
        result.append(copy)
        return
    if target<0: return 
    for i in range(index,len(candidates)):
        if candidates[i]>target:break
        if i ==index or candidates[i] != candidates[i-1]:
            cache.append(candidates[i])
            recursivehelper(candidates,i+1,target-candidates[i],cache,result)
            cache.pop()
def combinationSum2( candidates ,target):
        candidates.sort()
        result=[]
        recursivehelper(candidates ,0  ,target , [],result)
        return self.result

combinationSum2(candidates=[10,1,2,7,6,1,5],target=8)