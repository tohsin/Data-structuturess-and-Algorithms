def groupThePeople(groupSizes):
    cache={}
    answer=[]
    for i in range(len(groupSizes)):
        if groupSizes[i] not in cache:
            cache[groupSizes[i]]=[]
        cache[groupSizes[i]].append(i)
        size_of_current_arr=len( cache[groupSizes[i]])
        allowed_memory=groupSizes[i]
        if size_of_current_arr==allowed_memory:
                #if full add to answer and clear
                answer.append( cache[groupSizes[i]].copy())
                cache[groupSizes[i]].clear()
    return answer
           
        
print(groupThePeople([3,3,3,3,3,1,3]))