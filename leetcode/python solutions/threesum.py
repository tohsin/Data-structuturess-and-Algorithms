def maxArea(nums=[1,-1,-1,0]):
    result=[]
    nums.sort()
    for i in range(len(nums)-2):
        if i==0 or (i>0 and nums[i] != nums[i-1]):
            low=i+1
            high=len(nums)-1
            sum_=0-nums[i]

            while low<high:
                if nums[low] +nums[high]==sum_:
                    result.append([nums[i],nums[low],nums[high]])
                    while low<high and (nums[low]==nums[low+1]):low+=1
                    while low<high and (nums[high]==nums[high-1]):high-=1
                    low+=1
                    high-=1
                elif nums[high]+nums[low] >sum_:
                    high-=1
                else:
                    low+=1
    return result
print(maxArea())

