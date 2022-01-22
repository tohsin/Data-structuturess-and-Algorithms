def maxValue(n, x) -> str:
        max_val=float('-inf')
        if n[0]=="-": #is negative
            for i in range(1,len(n)):
                a=n[0:i]
                b=str(x)
                c=n[i:len(n)]
                max_val=max(int(a+b+c) ,max_val)
            max_val=max(int(n+str(x)) ,max_val)
            return str(max_val)
        else:
            #not negative
            for i in range(len(n)):
                a=n[0:i]
                b=str(x)
                c=n[i:len(n)]
                max_val=max(int(a+b+c) ,max_val)
            max_val=max(int(n+str(x)) ,max_val)
            return str(max_val)
print(maxValue("-132",3))