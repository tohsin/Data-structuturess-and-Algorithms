"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []


def cloneGraph(node):
        cache={}
        def dfs(node):
            if node:
                node_copy=Node(node.val)
                cache[node]=node_copy
            for neighbour in node.neighbors:
                if neighbour in cache:
                    node_copy.neighbors.append(cache[neighbour])
                else:
                    node_copy.neighbors.append(dfs(neighbour))
            return node_copy
        node_=dfs(node)
        return node_
def initiateGraph():
    firstnode=Node(1)
    secnode=Node(2)
    thrnode=Node(3)
    fourthnode=Node(4)
    firstnode.neighbors.append(secnode)
    firstnode.neighbors.append(fourthnode)
    secnode.neighbors.append(firstnode)
    secnode.neighbors.append(thrnode)
    thrnode.neighbors.append(secnode)
    thrnode.neighbors.append(fourthnode)
    fourthnode.neighbors.append(firstnode)
    fourthnode.neighbors.append(firstnode)
    return firstnode
node=initiateGraph()
cloneGraph(node)

        
        