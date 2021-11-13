def numTrees(n=4):
    dp=[0]*(n+1)
    dp[0]=0
    dp[1]=1
    for i in range(2,n):
        sum=0
        for j in range(i):
            
            l=dp[j-0]
            r=dp[i-j]
            sum=sum +l+r
        dp[i]=sum
print(numTrees())
            