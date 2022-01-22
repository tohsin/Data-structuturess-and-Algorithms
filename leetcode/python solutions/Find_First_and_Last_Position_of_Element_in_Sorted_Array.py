

def searchRange( nums, target: int):
        if len(nums)==0:
            return [-1,-1]
        if (nums[0]==target and nums[-1]==target):
            return [0,len(nums)-1]
        if (target> nums[len(nums)-1]):
                return [-1,-1]
        idx=binary_search(l=0,r=len(nums)-1,key=target,arr=nums)
        if (idx == -1):
            return [-1,-1]
        ans=[idx,idx]
        for i in range(idx+1,len(nums)):
            if nums[i]==target:
                ans[1]=i
            else: break
        for i in range(idx-1,-1,-1):
            
            if nums[i]==target:
                ans[0]=i
            else: break
        return ans
def binary_search(l,r,key,arr):
    if r >= l:
    
        mid = l + (r - l)//2

        # If found at mid, then return it
        if arr[mid] == key:
            return mid

        # Search the left half
        elif arr[mid] > key:
            return binary_search(l, mid-1,key,arr)

        # Search the right half
        else:
            return binary_search( mid + 1, r,key,arr)

    else:
        return -1

       
print(searchRange([1,2,3],1))