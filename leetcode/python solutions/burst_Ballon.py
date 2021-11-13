    def maxCoins(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if tuple(nums) in self.d:
            return self.d[tuple(nums)]
        
        def index(nums, i):
            n = len(nums)
            if i >=0 and i < n:
                return nums[i]
            return 1
        
        n = len(nums)
        if n == 0:
            return 0
        if n == 1:
            return nums[0]
        if n == 2:
            max_coins = nums[0]*nums[1]+max(nums[0], nums[1])
            self.d[tuple(nums)] = max_coins
            return max_coins
        
        max_coins = max([index(nums, i-1)*index(nums, i)*index(nums,    i+1)+self.maxCoins(nums[:i]+nums[i+1:]) for i                             in range(n)])
        self.d[tuple(nums)] = max_coins
        return max_coins