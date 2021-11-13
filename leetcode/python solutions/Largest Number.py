def largestNumber(nums=[0,0]):
    # [34323,3432]
    # mergesort(nums)
    s=[str(i) for i in nums]
    res =int(''.join(s))

    return str(res)
def mergesort(arr):
    if len(arr)>1:
        mid=len(arr)//2
        L=arr[:mid]
        R=arr[mid:]

        mergesort(L)
        mergesort(R)
        i=j=k=0

        while i<len(L) and  j<len(R):
            val=comparehigher(L[i],R[j])
            if val==L[i]:
                arr[k]=L[i]
                i+=1
            else:
                arr[k]=R[j]
                j+=1
            k+=1
        while i<len(L):
            arr[k]= L[i]
            i+=1
            k+=1
        while j<len(R):
            arr[k]= R[j]
            j+=1
            k+=1
    
def comparehigher(a,b):
    va=str(a)+str(b)
    vb=str(b)+str(a)
    if int(va)>int(vb):
        return a
    else:
        return b
    # stra=str(a)
    # strb=str(b)
    # i=0
    # while True:
    #     va=int(stra[i])
    #     vb=int(strb[i])
    #     if va > vb:
    #         return a
    #     elif va < vb:
    #         return b
    #     elif va== vb:
    #         if i+1==len(stra) or i+1==len(strb):
    #             if len(strb) < len(stra):
    #                 if int(stra[len(strb)-1]) >=int(strb[0]):
    #                     return b
    #                 else:
    #                     return a
    #             else:
    #                     if int(strb[len(stra)-1]) >=int(stra[0]):
    #                         return a
    #                     else:
    #                         return b
                    
    #         i+=1
print(largestNumber())