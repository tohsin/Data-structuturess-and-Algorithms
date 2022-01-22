class Solution:
    def deleteNode(self, root, key):
        self.prune=False
        def dfs(parent,node,direction):
            if self.prune:
                return
            if root:
                if key==node.val:
                    self.prune=True
                    if node.right==None and node.left==None: #if node is leaf
                        if direction==0:
                            parent.left=None
                        else:
                            parent.right=None
                    elif node.right == None: #has no right child
                        if direction==0:#coming from right
                            v=node.right.val
                            parent.left=node.left
                        else:
                            parent.right=node.right
                    elif(node.left==None):
                        if direction==0:
                            parent.left=node.left
                        else:
                            parent.right=node.left
                    else: # has left and right node
                        ptr=node.right
                        par=ptr
                        while ptr.left!=None:
                            par=ptr
                            ptr=ptr.left
                            
                        if (parent!=None):
                            if direction
                        else:
                            ptr
                        
                        
                dfs(node,node.left,0)
                dfs(node,node.right,1)
        dfs(None,root,None)
        return root
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
    
        
rootnode=TreeNode(5)
node1=TreeNode(3)
node2=TreeNode(2)
node3=TreeNode(4)
node4=TreeNode(6)
node5=TreeNode(7)

rootnode.left=node1
rootnode.right=node4
node4.right=node5
node1.left=node2
node1.right=node3

soln=Solution()
soln.deleteNode(rootnode,3)