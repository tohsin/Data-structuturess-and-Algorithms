def nonDivisibleSubset(k, x):
    max=0
    i=0
    j=1
    a=None
    count=0
    while i<len(x)-2:
        r=x[i]
        v=x[j]
        if (x[i]+x[j]) % k!=0:
            count +=0
        i=j
        j=j+1



    return answer

a=[19,10,12,10,24,25,22]
b=[1,7,2,4]
print(nonDivisibleSubset(k=7,x=a))