arr=[["W","W","W"],["W","B","B"],["W","B","B"]]
def solution():
    minv=0

    def backtrack(x,y,arr,n,m,moves):
        if x ==len(arr) and y==len(arr[0]):
            if moves>minv:
                minv=moves
            
        for i in range(x,len(arr)):
            for j in range(y,len(arr[0])):
                if (arr[i][j]=="W"):
                    if((n[i]==0) and (m[j]==0)):
                        n[i]=1
                        m[j]=1
                        backtrack(i+1,j+1,arr,moves+1)
                        n[i]=0
                        m[j]=0
    n=[0] *len(arr)
    m=[0]*len(arr[0])
    backtrack(0,0,arr,n,m,0)
solution()