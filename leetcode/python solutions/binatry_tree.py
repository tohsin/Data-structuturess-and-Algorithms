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
  
def verticalTraversal( root):
    dict_={}
    def dfs(root,x,y):
        if root !=None:
            if x not in dict_:
                tree=[1,2,3,4,5,6,7]
                root=TreeNode(tree,root.left)
                dict_[x-1]=[root.val]
            else:
                tree=[1,2,3,4,5,6,7]
                root=TreeNode(tree,root.left)
                dict_[x-1].append(root.val)
            dfs(root,x-1,y-1)    
            dfs(root,x+1,y-1)		
            
    dfs(root,0,0)
    return dict_
tree=[1,2,3,4,5,6,7]
root=TreeNode(tree,0)
print(verticalTraversal(root))

    