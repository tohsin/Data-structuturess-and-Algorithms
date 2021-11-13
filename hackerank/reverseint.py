def reverse(x=1534236469) -> int:
        v=2**31
        if x==0 : return 0
        ans=""
        b=str(x)
        if x<0:
            ans+="-"
            for i in range(len(b)-1,0,-1):
                ans+=b[i]
            
        else:
            for i in range(len(b)-1,-1,-1):
                a=b[i]
                ans+=b[i]
        if int(ans)-1 > v or int(ans) < -v:
            return 0
        else:
            return int(ans)
print(reverse())