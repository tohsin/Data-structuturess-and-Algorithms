def divisibleSumPairs(n=0, k=3, ar=[1,3,2,6,1,2]):
    count=0
    for i in range(len(ar)-1):
        for j in range(i+1,len(ar)):
            if (ar[i] +ar[j]) % k ==0:
                count+=1
    return count
print(divisibleSumPairs())