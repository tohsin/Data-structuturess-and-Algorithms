def arrangeWords(text='Leetcode is cool'):
        x=text.split(" ")
        
        cache={}
        for i in range(len(x)):
            cache[x[i]]=i
        ans=mergesort(x,cache)
        soln=""
        for i in range(len(ans)):
            soln +=ans[i]
            if i != len(ans)-1:
                soln+=" "
        return soln
def mergesort(arr,cache):
    if len(arr)>1:
        mid=len(arr)//2
        L = arr[:mid] # Dividing the array elements  
        R = arr[mid:]
        mergesort(L,cache)
        mergesort(R,cache)
        
        i=j=k=0
        while i < len(L) and j < len(R): 
            if len(L[i]) < len(R[j]): 
                arr[k] = L[i] 
                i+= 1
            elif len(L[i]) > len(R[j]): 
                arr[k] = R[j] 
                j+= 1
            elif len(L[i]) == len(R[j]):
                if cache[L[i]] <cache[R[j]]:
                    arr[k] = L[i] 
                    i+= 1
                else:
                    arr[k] = R[i] 
                    j+= 1
            k+= 1
          
        # Checking if any element was left 
        while i < len(L): 
            arr[k] = L[i] 
            i+= 1
            k+= 1
          
        while j < len(R): 
            arr[k] = R[j] 
            j+= 1
            k+= 1
    return arr
            
print(arrangeWords())