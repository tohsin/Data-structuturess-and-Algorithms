'''
Ha google you have such funny questions so drmatic and spy thingy.
These comments not sure if anyones gonna read it but oh well here we go
commander lamda almost pulled one on me, intially tempted to try back tracking and 
then brute force method and running into some problems

I soon realised like the previous problem this is infact a dynamic
programming problem and having previous solutions caches somewhere suddenly makes 
the problem easy to solve

the story continues in stage four🤧
'''
def solution(l):
    
    answer=0 #to count each of the solutions
    dp=[0]* len(l) #create dp table to store solutions or rather values that have been previusly prcocessed with a count of number of divisible values
    for i in range(len(l)-1):
        for j in range(i+1,len(l)):
            #simple check if value is divisible
            if l[j]%l[i]==0:
                dp[j]+=1#dp[j] is divisble by dp[i] we update the table
                answer+=dp[i]
    return answer
    # Your code herea
    
    
                
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
