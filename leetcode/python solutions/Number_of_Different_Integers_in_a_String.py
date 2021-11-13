#a123bc34d8ef34
def numDifferentIntegers(word):
        cache=set()
        is_in_num=False
        start_index=0
        for i in range(len(word)):
            value=word[i]
            if word[i].isdigit() and not is_in_num:
                is_in_num=True
                start_index=i
            # elif word[i].isdigit() and is_in_num:
            #     #do nothing
            #     pass
            elif  (not word[i].isdigit()) and is_in_num:
                is_in_num=False
                cache.add(int(word[start_index:i]))
        if is_in_num:
            cache.add(int(word[start_index:i+1]))
        print(len(cache))
        return len(cache)
                #begin caching
                
         
    
    
 

numDifferentIntegers("a123bc34d8ef34")