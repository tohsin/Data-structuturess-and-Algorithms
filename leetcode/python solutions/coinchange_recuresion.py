def coinChange_(coins,amount):
    return coinChange(0,coins,amount)
def coinChange(idxCoin,coins,amount):
    if amount==0:return 0
    if (idxCoin<len(coins)) and (amount >0):
        maxVal = int(amount/coins[idxCoin])
        minCost = 10000
        for  x in range(maxVal+1):
            if (amount >= x * coins[idxCoin]):
                res = coinChange(idxCoin + 1, coins, amount - x * coins[idxCoin])
                if (res != -1):
                    minCost = min(minCost, res + x);
        if minCost == 10000:
            return -1
        else: return minCost;
    return -1
coined=[1,2,5]
amt=11
print(coinChange_(coined,amt))