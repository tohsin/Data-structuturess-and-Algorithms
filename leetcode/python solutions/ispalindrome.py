def isPalindrome(s="020"):
        left=0
        right=len(s)-1
        while left <right:
            while (left <right) and not   (s[left].isalnum()):left+=1
            while (left <right) and  not (s[right].isalnum()): right-=1
            if s[left].upper() ==s[right].upper():
                left+=1
                right-=1
            else:
                return False
        return True
print(isPalindrome())