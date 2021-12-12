
def longestCommonPrefix( strs) -> str:
        current_longest=strs[0]
        lcp(strs,0,len(strs)-1)
def lcp(str_,left,right):
        if left==right:
            return left
        else:
            mid=(left+right)/2
            lcdleft=lcp(str_,left,mid)
            lcdright=lcp(str_,mid+1,right)
            ismatch(lcdleft,lcdright)
            
def ismatch( left , right):
        smallest_size=min(len(left),len(right))
        for i in range(smallest_size):
            if left[i]!=right[i]:
                return  left[0:i]
        return left[0:smallest_size]
# def longestCommonPrefix( strs) -> str:
#         cache=strs[0]
#         for i in range(1,len(strs)):
#             cache=ismatch(cache,strs[i])
            
#         return cache

            
# def ismatch( left , right):
#         smallest_size=min(len(left),len(right))
#         for i in range(smallest_size):
#             if left[i]!=right[i]:
#                 return  left[0:i]
#         return left[0:smallest_size]
print(longestCommonPrefix(["flower","flow","flight"]))
        
        