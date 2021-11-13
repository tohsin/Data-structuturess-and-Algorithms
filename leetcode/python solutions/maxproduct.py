def maxProduct( nums=[-2,3,-4]):
        dp=[-1000000]*len(nums)
        dp[0]=nums[0]
        val=nums[0]
        for i in range(1,len(nums)):
            dp[i]=max(nums[i],dp[i-1]*nums[i])
            val=max(val,dp[i])
        print (val)
maxProduct()