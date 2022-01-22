def searchMatrix(matrix, target) -> bool:
        row=None
        for i in range(len(matrix)):
            v=matrix[i][0]
            if(v==target):
                return True
            if matrix[i][0]>target:
                row=i-1
                break
        if row ==None:
            row=len(matrix)-1
        
        def binary_search(arr, low, high, x):
            # Check base case
            if high >= low:

                mid = (high + low) // 2

                # If element is present at the middle itself
                if arr[mid] == x:
                    return mid

                # If element is smaller than mid, then it can only
                # be present in left subarray
                elif arr[mid] > x:
                    return binary_search(arr, low, mid - 1, x)

                # Else the element can only be present in right subarray
                else:
                    return binary_search(arr, mid + 1, high, x)

            else:
                # Element is not present in the array
                return -1
        if (binary_search(matrix[row],0,len(matrix[row] )-1 , target))== -1:
            return False
        else:
            return True
searchMatrix(matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,50]], target = 30)