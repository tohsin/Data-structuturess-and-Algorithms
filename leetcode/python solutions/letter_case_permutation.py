def letterCasePermutation( s) :
        answer=[]
        cache=''
        for i in range(len(s)):
            if s[i].isalpha():
                a='' if i==0 else s[0:i-1]
                if s[i].islower():
                    b=str(s[i]).upper()
                    c=s[i+1:len(s)]
                    ans=a+b+c
                elif s[i].isupper():
                    ans=s[0:i-1]+ s[i].lower +s[i+1:len(s)]
                answer.append(ans)
        
letterCasePermutation('a1b2')