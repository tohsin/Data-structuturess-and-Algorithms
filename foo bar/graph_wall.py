class node:
    def __init__(self,dist) -> None:
        self.shortest_dist=dist
        self.shortest_dist_truwall=None
        
def solution(graph):
    inf=float('inf')
    w=len(graph[0])
    h=len(graph)
    dp={}
    trigger=False
    dp[ ( h-1,w-1) ]=node(1)
    for col in range(w-2,-1,-1):
        prevnode=dp[ (h-1, col+1)]
        if trigger:
            dp[ ( h-1, col) ]=node(inf)
            continue
        if graph[h-1][col]==1:
            if prevnode.shortest_dist_truwall==None:
                dp[ ( h-1, col) ]= node(prevnode.shortest_dist +1)
                dp[ ( h-1, col) ].shortest_dist_truwall= 1+prevnode.shortest_dist
            else:
                trigger=True
                dp[ ( h-1, col) ]= node(inf)
        else:
            dp[ ( h-1, col) ]= node(prevnode.shortest_dist +1)
    trigger=False
    for row in range(h-2,-1,-1):  
        prevnode=dp[ (row+1, w-1)]
        if trigger:
            dp[ ( row, w-1) ]=node(inf)
            continue
        if graph[row][w-1]==1:
            if prevnode.shortest_dist_truwall==None:
                dp[ ( row, w-1) ]= node(prevnode.shortest_dist +1)
                dp[ ( row, w-1) ].shortest_dist_truwall= 1+prevnode.shortest_dist
            else:
                trigger=True
                dp[ ( row, w-1) ]= node(inf)
        else:
            dp[ ( row, w-1 ) ]= node(prevnode.shortest_dist +1)
            if prevnode.shortest_dist_truwall!=None:
                dp[ ( row, w-1 ) ].shortest_dist_truwall=prevnode.shortest_dist_truwall+1

    l=dp
        
    
    
    
    
    
solution(graph=[[0, 1, 1, 0], [0, 0, 0, 1], [1, 1, 0, 0], [1, 1, 1, 0]])