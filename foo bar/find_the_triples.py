def solution(l):
    cache=[0]
    def backtracking(curr,i,l):
        if len(curr)==3:
            cache[0]+=1
            return
        for i in range(i,len(l)):
            value=l[i]
            if len(curr)==0:
                curr.append(l[i])
            elif (len(curr)==1 and l[i] % curr[0]==0):
                curr.append(l[i])
            elif (len(curr)==2 ):
                if(l[i] % curr[0]==0 and l[i] % curr[1]==0 ):
                    curr.append(l[i])
            backtracking(curr,i+1,l)
            curr.pop()    
    backtracking([],0,l)
    print(cache[0])
# solution([1,2,3,4,5,6])

def simpleiterativeSolution(l):
    cnt=0
    dp=[0]*len(l)
    for i in range(len(l)-1):
        for j in range(i+1,len(l)):
            if l[j]%l[i]==0:
                dp[j]+=1
                cnt+=dp[i]
    return cnt
print(simpleiterativeSolution([1,2,3,4,5,6]))
                
    
    
                
# class backtSOlN:
#     def __init__(self,l):
#         self.answer=0
#         self.l=l
#     def backtracking(self,curr,index):
#         if len(curr)==3:
#             self.answer+=1
#             return
#         for i in range(index,len(self.l)):
#             if len(curr)==0:
#                 curr.append(self.l[i])
#             elif (len(curr)==1 and self.l[i] % curr[0]==0):
#                 curr.append(self.l[i])
#             elif (len(curr)==2 ):
#                 if(self.l[i] % curr[0]==0 and self.l[i] % curr[1]==0 ):
#                     curr.append(self.l[i])
#             self.backtracking(curr,i+1)
#             curr.pop()
#     def returnSOlution(self):
#         self.backtracking([],0)
#         return self.answer
# back=backtSOlN([1,2,3,4,5,6])
# back.returnSOlution()
