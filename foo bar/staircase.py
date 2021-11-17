'''
At first this looked like a recursive problem to keep calling solutions
on the remaining bricks after taking some amount

But on careful reconsideration 
if some bricks were held constant and the previous solutions were stored
in a table, instead of recomputing solution they would just be called
from memory in constant time

This solution uses dynamic programming and memoization to build the
the solution from scratch(1) to n.

Some values of n were redudndant such as values from 4 to 1
as they would never be called and so werent created or used in the 
dp table.
'''
def solution(n): 
    '''
    All solutions from 4 below arent necessary for future computation
    and so dont have slots in the dp memory and all solutions for 4 below
    return  1'''
    if n <=4:
        return 1
    
    dp=[] #initialise dp table
    for i in range(n-4): dp.append([]) #create a 2d dp table of length n-4 as the first 4 arent necessary
    
    for i in range(5,n+1): #loop from 5 to the required solution
        # we start the table from 5 as explained above
        ''' solution for 10 as example 
            if we split between 9|1 and go down from there to the ffg
            8|2 ,7|3,6,4 we cant go further than this
            If we had done 9 previously we know there are 3 other ways to breakdown 9 with 2 as the minumum we start with
            and 8|2 has another way to be broke down and so on
            
        '''
        a,b=i-1,1
        while(a>b): # to ensure its always a step and never equal in length
            compute=1 #minumum is one step
            if a>4:
                for x in range(b,len(dp[a-5])): #we loop from the previous solutions in the table
                    compute+=dp[a-5][x]
            dp[i-5].append(compute) #add value tothe table
            a-=1 #updatethe spe
            b+=1
    ans=0
    #we loop through the final table to find the sum
    for i in range(len(dp[n-5])):
        ans+=dp[n-5][i]
    return ans
        
            
            
print(solution(200))