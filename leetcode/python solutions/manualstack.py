# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        stack=[(p,q)]
        while stack:
            (p,q)=stack.pop()
            if p and q and (q.val==p.val):
                stack.extend([(p.left,q.left),
                             (p.right,q.right)])
            elif p or q:
                return false
        return true