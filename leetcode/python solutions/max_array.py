def max_aray_sum(arr=[2, 1, 5, 8 ,4]):
    dp=["None"]*(len(arr)+2)
    dp[0]=0
    dp[1]=0
    for i in range(len(arr)):
        dp[i+2]=max((arr[i]+dp[i]),dp[i+1])
    return dp[len(arr)+1]

print(max_aray_sum())