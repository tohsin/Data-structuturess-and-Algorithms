def orangesRotting( grid) -> int:
        
        def bfs(node):
            min_count=0
            from collections import deque 
            q = deque( ) 
            q.append(node)
            while len(q)  >0:
                n=q.popleft()
                if grid[n[0]][n[1]] ==2:
                    modifid=False
                    if n[1]+1 <len(grid[0]) and grid[n[0]][n[1]+1]==1 :
                        modifid = True
                        grid[n[0]][n[1]+1]=2
                        q.append([n[0],n[1]+1])
                    if n[1] >0 and grid[n[0]][n[1]-1]==1 :
                        modifid = True
                        grid[n[0]][n[1]-1]=2
                        q.append([n[0],n[1]-1])
                    if  n[0]+1 <len(grid) and grid[n[0]+1][n[1]]==1 :
                        modifid = True
                        grid[n[0]+1][n[1]]=2
                        q.append([n[0]+1,n[1]])
                    if  n[0] >0 and grid[n[0]-1][n[1]]==1 :
                        modifid = True
                        grid[n[0]-1][n[1]]=2
                        q.append([n[0]-1,n[1]])
                    if modifid:min_count +=1
            return min_count
      
        
        ans=0
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row] [col]==2:
                    ans+=bfs([row,col])
        for row in range(len(grid)):
            for col in range(len(grid[0])):  
                if grid[row][col]==1:return -1
                
        return ans
grid=[[1,1,2,0,2,0]]
print(orangesRotting(grid))