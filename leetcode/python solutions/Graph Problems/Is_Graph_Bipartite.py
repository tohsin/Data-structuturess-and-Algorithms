class Solution:
    def __init__(self) -> None:
        self.prune=False
        self.seen={}
        

    
    def isBipartite(self,graph):
        self.graph=graph
        for i in range(len(graph)):
            if len(graph[i])>0:
                break
        self.seen[i]=1
        self.dfs(i)
        if self.prune:
            return False
        else:return True
    def flip(self,state):
            if state==1:
                return 2
            else:return 1
        
    def dfs(self,node):
            if self.prune:
                return
            if 
            for i in range(len(self.graph[node])):
                if self.prune:
                    return
                val=self.graph[node][i]
                if (val in self.seen and self.seen[val]==self.seen[node]):
                        self.prune=True
                        break
                        return
                elif not (self.graph[node][i] in self.seen):
                    self.seen[self.graph[node][i]]=self.flip(self.seen[node])
                    self.dfs(self.graph[node][i],)
                
                    
sol=Solution()
print(sol.isBipartite([[],[2,4,6],[1,4,8,9],[7,8],[1,2,8,9],[6,9],[1,5,7,8,9],[3,6,9],[2,3,4,6,9],[2,4,5,6,7,8]]))
        
            
                        
                    
    

            
                
        
            
