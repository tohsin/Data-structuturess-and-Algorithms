def validMountainArray(arr):
        left=0
        
                
        for i in range(len(arr)-1):
            if not(arr[i+1]>arr[i]):
                left=i
                break
        print(left)
validMountainArray([0,2,3,4,5,2,1,0])