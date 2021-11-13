
def letterCombinations(digits):
    ram={1:[],
        2:["a","b","c"],
    3:["d","e","f"],
    4:["g",'h','i'],
    5:["j",'k','l'],
    6:["m",'n','o'],
    7:['p','q','r','s'],
    8:['t','u','v'],
    9:['w','x','y','z']}

    result=[]
    def dfs(cache,index,bar):
        if len(cache)==len(digits):
            val="".join(cache.copy())
            result.append(val)
            return
        for i in range(index,len(digits)):
            for x in range(bar,len(ram[int(digits[i])])):
                cache.append(ram[int(digits[i])][x])
                dfs(cache,i+1,bar)
                cache.pop()
    dfs([],0,0)
    return result
print(letterCombinations("13"))

