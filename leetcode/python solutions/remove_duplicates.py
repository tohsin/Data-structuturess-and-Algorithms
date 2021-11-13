def removeDuplicates(nums=[0,0,1,1,2,3,3]):
        if nums==[]:return 0
        left =0
        right=left+1
        while right<len(nums):
            vall=nums[left]
            valr=nums[right]
            
            if nums[right] !=nums[left]:
                if right-left>2:
                    nums[left:right-1]=[nums[left]]
                    left +=2
                    right=left+1
                else:
                    left +=1
                    right=left+1
            else:
                right+=1
        if nums[right-1] ==nums[left]:
                if right-left>2:
                    nums[left:right-1]=[nums[left]]
                    left +=2
                    right=left+1
                else:
                    left +=1
                    right=left+1
        return nums
print(removeDuplicates())