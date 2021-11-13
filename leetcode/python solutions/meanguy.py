def meanderingArray(unsorted=[-1,1,2,3,-5]):
    # Write your code here
    ans=[]
    unsorted.sort()
    left=0
    right=len(unsorted)-1
    while left<right:
        ans.append(right)
        ans.append(left)
        right-=1
        left+=1
    if left==right:
        ans.append(right)
    return ans
print(meanderingArray())