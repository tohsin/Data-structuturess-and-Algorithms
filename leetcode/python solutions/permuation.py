def permute( nums):
        results=[]
        
        def dfs(i,cache):
            if len(cache)==len(nums):
                results.append(cache.copy())
                return
            for i in range(len(nums)):
                if nums[i] in cache:continue
                cache.append(nums[i])
                dfs(i+1,cache)
                cache.pop()
        dfs(0,[])
        return results
print(permute([1,2,3]))