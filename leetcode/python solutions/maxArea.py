def maxArea(height= [1,8,6,2,5,4,8,3,7]):
    max_area,i,j=0,0,len(height)-1
    while i<j:
        h=min(height[i],height[j])
        max_area=max(max_area ,(h*(j-i)) )
        if height[i]>height[j]:
            j-=1
        else:
            i+=1
    return max_area
print(maxArea())