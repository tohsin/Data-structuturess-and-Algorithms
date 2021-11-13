def coinChange(coins,amount):
    table=[amount+1]*(amount+1)
    table[0]=0
    amt=1
    while amt <amount+1:
        for coin in coins:
            if  coin <= amt:
                table[amt]=min(table[amt],1+table[amt-coin])
        amt+=1
    if table[amount] ==amount+1: return -1
    return table[amount]
print (coinChange([1,2,5],11))