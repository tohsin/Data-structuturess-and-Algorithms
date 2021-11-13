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
        count=0
        def dfs(root,target):
            if target ==0:
                count+=1
                retrun
            if target <0:return
            # if not root:return
            tree=[10,5,-3,3,2,None,11,3,-2,None,1]
            dfs(TreeNode(tree,root.left),sum-root.val)
            dfs(TreeNode(tree,root.right),sum-root.val)  
        dfs(root,sum)
        print (count)
tree=[10,5,-3,3,2,None,11,3,-2,None,1]
root= TreeNode(tree,0)
pathSum(root,8)
