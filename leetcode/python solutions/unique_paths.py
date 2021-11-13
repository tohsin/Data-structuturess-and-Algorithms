def unique_path(m=7,n=3):
    dp=[[None]*m for i in range(n)]
    for p in range(m):
        dp[0][p]=1
    for p in range(n):
        dp[p][0]=1
    for x in range(1,n):
        for y in range(1,m):
            dp[x][y]=dp[x-1][y] +dp[x][y-1]
    return dp[n-1][m-1]
print(unique_path())
    
        
