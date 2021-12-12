

from fractions import Fraction
def solution(pegs):
    n=len(pegs)
    # if n==2:
    #     pass
    if n%2==0:
        iseven=True
    else:
        iseven=False
        
    if iseven:
        ans= -pegs[0]+pegs[n-1]
    else:
        ans= -pegs[0]-pegs[n-1]
    

    for i in range(1,n-1):
        
        ans += (2* ( (-1)**(i+1) ) * pegs[i])
    ans*=2
    
    
    if iseven:
        ans=Fraction(ans,3)
        if ans<2:
            return [-1,-1]
        radius=ans
        for i in range(n-2):
            d=pegs[i+1]-pegs[i]
            next_r=d-radius
            if (radius<1 or next_r<1):
                return[-1,-1]
            else:
                radius=next_r
        return [ans.numerator,ans.denominator]
    else:
        if ans<2:
            return [-1,-1]
        radius=ans
        for i in range(n-2):
            d=pegs[i+1]-pegs[i]
            next_r=d-radius
            if (radius<1 or next_r<1):
                return[-1,-1]
            else:
                radius=next_r
        return [ans,1]
        
            
    
        

        

print(solution((4,30,50)))