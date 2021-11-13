def superDigit(n, k):
    n=str(n)
    if len(n)==1:
        return (n)
    anx = sum(int(v)*k for v in n)
    v=superDigit(str(anx),1)
    return v
# def process(n):
    
#     if len(n)==1:
#         return (n)
#     sum_=0
#     for i in range(len(n)):
#         sum_+=int(n[i])
#     sum_=str(sum_)
#     ans= process(sum_)
#     return  ans
        

print (superDigit(123,3))