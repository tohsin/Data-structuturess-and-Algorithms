import collections
class node:
    def __init__(self,val):
        self.left=None
        self.right=None
        self.data=val
        
root=node(3)
target=root.left=node(5)
root.right= node(1)
root.left.left=node(6)
root.left.right=node(2)
root.left.right.left=node(7)
root.left.right.right=node(4)
root.right.left= node(0)
root.right.right= node(8)


def distanceK( root, target, K):
        def dfs(node, par = None):
            if node:
                node.par = par
                dfs(node.left, node)
                dfs(node.right, node)

        dfs(root)

        queue = collections.deque([(target, 0)])
        seen = {target}
        while queue:
            if queue[0][1] == K:
                return [node.val for node, d in queue]
            node, d = queue.popleft()
            for nei in (node.left, node.right, node.par):
                if nei and nei not in seen:
                    seen.add(nei)
                    queue.append((nei, d+1))

        return []
    
        #we need to find the guy first
distanceK(root,target,2)     

