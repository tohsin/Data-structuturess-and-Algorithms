def findDuplicates(nums):
    ans=[]
    for i in range(len(nums)):
        index=abs(nums[i])-1
        if nums[index] <0:
            ans.append(abs(nums[i]))
            nums[abs(index)]=abs(nums[index])
        else:
            nums[abs(index)]=-nums[index]
    return ans
nums=[4,3,2,7,8,2,3,1]
print(findDuplicates(nums))