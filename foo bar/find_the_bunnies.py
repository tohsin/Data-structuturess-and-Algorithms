'''
This implementation uses bellman ford algorithm to find shortest distance
and detect negative graph. If there is a negative cycyle then i can always
gain more time infinitley and pick up all the bunnies

After all the shortest distance have been calculated and cached
we create a permutaions of all possible solutions.We then transvers the solution if we have
more time after we transverse the solution
'''

from itertools import permutations


def bell_distance(graph,source):  # compute shortestdistance between source and nodes
    n=len(graph)
    dist=[float('inf')] * n
    dist[source]=0
    for relaxations in range(n):
        for u in range(n):
           for v in range(n):
                weight=graph[u][v]
                if dist[u]+weight<dist[v]:# relaxation algorithm
                    dist[v]=dist[u] + weight
    return dist
                    
def bellman_ford(graph):
    dist=[]
    for vertexs in range(len(graph)):
        dist.append(bell_distance(graph,vertexs))
    return dist
    

def is_negatvive_cycle(graph):
    dist=graph[0]
    #if one more relaxation occurs then graph is negative cycle
    for u in range(len(graph)):
        for v in range(len(graph)):
            weight = graph[u][v]
            if dist[u]+weight<dist[v]:
                    return True
    return False 
    
def time_consumed(bunnies,graph):
    time=0
    time+=graph[0][bunnies[0]] # distance from start to first bunny has to be considered first
    time+=graph[bunnies[-1]][len(graph)-1]  # distance from last bunny to bulk head to check time we gain going back to the end
    #loop runs from edgesof the bunnies order
    for i in range(1,len(bunnies)):
        u=bunnies[i-1] #previous vertex
        v=bunnies[i]   #to vertex
        time+=graph[u][v]  #time grained between moving from u to v
    return time
        

                    
def solution(times, times_limit):
    n_bunnies=len(times)-2
    bunnies=[]
    for i in range(1,n_bunnies+1):
        bunnies.append(i)
    distances=bellman_ford(times) #compute shortestdisctance
    if is_negatvive_cycle(distances): #if negative cycle retturn all bunnies
        return range(n_bunnies)
   
    for i in range(n_bunnies,0,-1):
        for perm in permutations(bunnies,i):
            time = time_consumed(perm,distances)
            if time<=times_limit:
                return [x-1 for x in sorted(perm)]
    return []






graph=[[0,2,2,2,-1],
       [9,0,2,2,-1],
       [9,3,0,2,-1],
       [9,3,2,0,-1],
       [9,3,2,2,0]]
print(solution(graph,1))
