class Solution:
    
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        arr1=self.getleaves(root1)
        arr2=self.getleaves(root2)
        if len(arr1) !=len(arr2):
            return False
        for i in range(len(arr1)):
            if arr1[i]!=arr2[i]:
                return False
        return True
        
        
    def getleaves(self,root):
        leaves=[]
        def dfs(root):
            if root:
                if(root.left==None and root.right==None):
                    leaves.append(root)
                dfs(root.left)
                dfs(root.right)
        dfs(root)
        return leaves
    
    
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
root1=TreeNode(3)
