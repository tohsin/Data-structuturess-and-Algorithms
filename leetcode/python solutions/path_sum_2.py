class TreeNode:
    def __init__(self,tree,root):
        self.root=root
        self.tree = tree
        
        self.val=self.tree[self.root]
        
        if 2*(self.root+1)-1 <len(tree):
            self.left=2*(self.root+1)-1
        else:
            self.left=None
        if 2*(self.root+1)  <len(tree):
            self.right=2*(self.root+1) 
        else:
            self.right=None

def pathSum(root, sum): 
            result= []
            def dfs(cache,root,sum):
                tree=[5,4,8,11,None,13,4,7,2,None,None,5,1]             
                if  root==None:return
                cache.append(root.val)
                if root.val ==sum and root.left == None and root.right==None:
                    result.append(cache.copy())
                    return 
                dfs(cache, TreeNode(tree,root.left),sum-root.val)
                dfs(cache,TreeNode(tree,root.right), root.right,sum - root.val)
            dfs([],root,sum)
            return result
        
tree=[5,4,8,11,None,13,4,7,2,None,None,5,1]
root= TreeNode(tree,0)
print(pathSum(root,22))


        