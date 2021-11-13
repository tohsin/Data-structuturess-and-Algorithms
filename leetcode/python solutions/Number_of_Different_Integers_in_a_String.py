#a123bc34d8ef34
def numDifferentIntegers(word):
        
        is_in_num=False
        for x in range(len(word)):
            if word[x].isdigit():
                is_in_num=True
            else:
                if is_in_num 
            
    
    
        cache=set()
        i=0
        while (i<len(word)):
            value=word[i]
            if word[i].isdigit():#i=1 ,j=2 j=3 j=4
                for j in range(i+1,len(word)):
                    if not (word[j].isdigit()):
                        cache.add(word[i:j])
                        i=j
                        break
                    
            else:
                i+=1
        print(len(cache))
        return (len(cache))



numDifferentIntegers('a123bc34d8ef34')