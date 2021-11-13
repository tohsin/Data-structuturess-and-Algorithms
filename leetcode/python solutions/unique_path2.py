def uniquePathsWithObstacles( obstacleGrid=[[0,0],[1,1],[0,0]]):
    m=len(obstacleGrid[0])
    n=len(obstacleGrid)
    dp=[[0]*m for i in range(n)]
    dp[0][0]=1
    for p in range(1,m):
        if obstacleGrid[0][p]==0:
            dp[0][p]+=dp[0][p-1]
    for p in range(1,n):
        if obstacleGrid[p][0]==0 :
            dp[p][0]+=dp[p-1][0]
        
    for x in range(1,n):
        for y in range(1,m):
            if obstacleGrid[x][y]==0:
                dp[x][y]=dp[x-1][y] +dp[x][y-1]
    return dp[n-1][m-1]
print(uniquePathsWithObstacles())