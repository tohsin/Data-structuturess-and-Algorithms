def compress( chars) -> int:
        ans=0
        left=0
        right =left+1
        while right<len(chars)+1:
            if right == len(chars) or chars[left] !=chars[right]:
                ans= ans +1 +len(str(right-left)) if right-left >1 else  ans+1
                left=right
                right=left+1
            else:
                right +=1
        return ans
            
list_=["a","a","b","b","c","c","c"]
print(compress(list_))