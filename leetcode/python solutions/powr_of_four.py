def isPowerOfFour( num: int) -> bool:
        if num < 4:return False
        j=0
        
        while (4**j)<num+1:
            fact=4**j
            if 4**j==num:return True
            j+=1
        return False
print(isPowerOfFour(num=16))