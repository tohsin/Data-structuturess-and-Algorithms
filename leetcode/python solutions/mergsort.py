def mergesort(a,low,high):
    if low<high:
        mid=(high+low)//2
        mergesort(a,low,mid)
        mergesort(a,mid,high)
        merge(a,low,mid,high)

def merge(a,p,q,r):
    L=a[p:q+1]
    R=a[q+1:r+1]
    i=j=k=0
    while i < len(L) and j < len(R): 
            if L[i] < R[j]: 
                a[k] = L[i] 
                i+= 1
            else: 
                a[k] = R[j] 
                j+= 1
            k+= 1
          
        # Checking if any element was left 
    while i < len(L): 
            a[k] = L[i] 
            i+= 1
            k+= 1
          
    while j < len(R): 
            a[k] = R[j] 
            j+= 1
            k+= 1
arr=[2,4,5,7,1,2,3,6]
print(arr)
mergesort(a=arr,low=0,high=7)
print(arr)