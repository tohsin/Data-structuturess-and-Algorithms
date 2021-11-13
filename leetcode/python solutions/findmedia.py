def findMedianSortedArrays(nums1=[1,2],nums2=[3,4]):    
        length = len(nums1) + len(nums2)
        if length % 2 ==0:
            index=int((length/2) -1)
            left,right,ans=0,0,[]
            while left< len(nums1)and right < len(nums2):
                if nums1[left] < nums2[right]:
                    if left+right == index:
                        ans.append(nums1[left])
                        index+=1

                    left+= 1
                else:
                    if left+right== index:
                        ans.append(nums2[right])
                        index+=1  
                    right+= 1
                if len(ans)==2:return (ans[0] +ans[1])/2
                    
            while right<len(nums2):
                if len(ans)==0: return (nums2[index-left] +nums2[index-left+1])/2
                else: return (ans[0]+nums2[index-left])/2
            while left<len(nums1):
                if len(ans)==0:
                    return (nums1[index-right] +nums1[index-right+1])/2
                else:
                    return (ans[0]+nums1[index-right])/2
        else:
            index = length//2
            left,right=0,0
            while left< len(nums1)and right < len(nums2):         
                if nums1[left] < nums2[right]:
                    if left+right == index:return nums1[left]
                    left+= 1
                else:
                    if left+right == index:return nums2[right]
                    right+= 1      
            if right<len(nums2): return nums2[index-left]
            if left<len(nums1):return nums1[index-right]
        








      
print(findMedianSortedArrays())