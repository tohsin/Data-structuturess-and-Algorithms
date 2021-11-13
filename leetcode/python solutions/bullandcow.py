def getHint(secret="1807", guess="7810") -> str:
    pos_match=0
    number_match=0
    seen={}
    for i in range(len(secret)):
        if secret[i]== guess[i]:
            pos_match+=1
        else:
            if secret[i] not in seen:
                seen[secret[i]]=None
            if guess[i] in seen and seen[guess[i]] == None:
                number_match+=1
                seen[guess[i]] =1
    ans=str(pos_match) +'A'+str(number_match)+'B'
    return ans
print(getHint())