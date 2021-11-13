def solveNQueens(n=4):
    m=(n*n)-1
    col=[0]*n
    diag1=[0]*m
    diag2 = [0]*m
    result=[]
    result_board=[]
    ans=[]
    recursive(n,0,col,diag1,diag2,result,[])
    for soln in result:
        result_board=[]
        for x in range(n):
            line=""
            for y in range(n):
                if not ([y,x] in soln):
                    line+="."
                else:
                    line+="Q"
            result_board.append(line)
        ans.append(result_board)
    return ans
            


            
    
    


def recursive(n,y,col,diag1,diag2,result,curr_soln):
    if y ==n:
        ans=curr_soln.copy()
        result.append(ans)
        return
    for x in range(n):
        if (col[x]==1) or (diag1[x+y]==1) or (diag2[x-y+n-1]==1):continue
        curr_soln.append([x,y])
        col[x]=diag1[x+y]=diag2[x-y+n-1]=1
        recursive(n,y+1,col,diag1,diag2, result,curr_soln)
        col[x]=diag1[x+y]=diag2[x-y+n-1]=0
        curr_soln.pop()
print(solveNQueens())