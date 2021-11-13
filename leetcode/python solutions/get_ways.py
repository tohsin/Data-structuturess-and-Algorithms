
def getWays(n=4, c=[1,2,3]):
    # Write your code here
    c.sort()
    dp=[0]*(n+1)
    for cost in range(1,n+1):
        for coin in c:
            if coin > cost:
                break
            dp[cost]+=dp[cost-coin]
    return dp[-1]
print(getWays())
