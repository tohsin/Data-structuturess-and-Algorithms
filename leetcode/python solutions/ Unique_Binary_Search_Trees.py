def numTrees(n=5):
    dp=[0]*(n+1)
    dp[1]=0
    dp[2]=2
    dp[3]=5
    if n==1:return 1
    if n<4:return dp[n]
    for i in range(4,len(dp)):
        count=0
        tree=[0,1,i-1]
        iseven=False
        if i %2==0:iseven=True
        it=1
        while True:
            c=i//2
            if iseven and it == i//2:
                count +=dp[tree[0]]
                count +=dp[tree[2]]
                count*=2
                dp[i]=count
                break
            if not iseven and it==i//2 +1:
                count*=2
                count +=dp[tree[0]]
                count +=dp[tree[2]]
                dp[i]=count
                break
            count +=dp[tree[0]]
            count +=dp[tree[2]]
            tree[0]+=1
            tree[2]-=1
            it+=1
    return dp[-1]
print(numTrees())

