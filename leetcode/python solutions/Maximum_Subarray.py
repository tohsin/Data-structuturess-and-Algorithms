def maxSubArray( nums=[-2,1,-3,4,-1,2,1,-5,4]):
        dp=[-1000000]*len(nums)
        val=-100000
        for i in range(len(nums)):
            dp[i]=max(nums[i],dp[i-1]+nums[i])
            val=max(val,dp[i])
        print (dp)
maxSubArray()

