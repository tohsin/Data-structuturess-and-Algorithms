def jump( nums) -> int:
        dp=[float('inf')]*len(nums)
        dp=0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                dp[j]=min(dp[j],1+nums[i])
        