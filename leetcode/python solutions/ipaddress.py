def restoreIpAddresses(s= "25525511135"):
    result=[]
    if s >12:return []
    recursive(result,[[],[],[],[]],s,0)
def recursive(result,cache,s,len_left):
    if len_left >3:
        pass

    for i in range(len(cache)):
        for j in range

