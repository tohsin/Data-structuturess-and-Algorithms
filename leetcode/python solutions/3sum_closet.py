def threeSumClosest( nums,target) -> int:
        max_diff=None
        ans=None
        for root in range(len(nums)-2):
            val=nums[root]
            left=root+1
            right=len(nums)-1
            while left<right:
                curr_sum=nums[root]+nums[left]+nums[right]
                
                if nums[left]>nums[right]:
                    right-=1
                else:
                    left+=1
        
        return ans
print(threeSumClosest([0,2,1,-3],1))