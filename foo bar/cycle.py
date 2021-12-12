def getDifference(B, X, Y) :
     
    finalVal = 0;
    carry = 0;
 
    # To keep track of power
    power = 1;
 
    while (X > 0) :
 
        # Store last digits of current
        # value of X and Y in n1 and
        # n2 respectively
        n1 = X % 10;
        n2 = Y % 10;
 
        # Remove last digits from
        # X and Y
        X = X // 10;
        Y = Y // 10;
 
        temp = n1 - n2 + carry;
 
        if (temp < 0) :
 
            # Carry = -1 will act
            # as borrow
            carry = -1;
            temp += B;
 
        else :
            carry = 0;
 
        # Add in final result
        finalVal += temp * power;
        power = power * 10;
    return finalVal;
def algorithm(n,b):
    k=len(n)
    x=''
    y=''
    a=[int(x) for x in str(n)]
    a.sort()
    y="".join(str(n) for n in a)
    a.sort(reverse=True)
    x="".join(str(n) for n in a)
    z=getDifference(b, int(x), int(y))
    
    if(k!=len(str(z))):
        f=k-len(str(z))
        tr_zeroes=[0]*f
        z_str="".join(str(n) for n in tr_zeroes)
        z= z_str+str(z)
    return(z)
def solution(n,b):
    z=n
    current_length=0
    cache={}
    for _ in range(100):
        current_length+=1
        z=algorithm(str(z),b)
        if (z in cache):
            return current_length-cache[z]
        cache[z]=current_length

    
    
    
print(solution('1211',10))
    
    