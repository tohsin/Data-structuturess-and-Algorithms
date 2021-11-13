# def combinationSum3( k=3,n=9):
#     reslut=[]
#     def dfs(i,remain,cache):
#         if len(cache)==k and remain==0:
#             reslut.append(cache.copy())
#             return
#         elif remain<0 and len(cache)==k:
#             return
#         elif len(cache)==k and remain>0:
#             return
#         for i in range(i,9):
#             cache.append(i+1)
#             dfs(i+1,remain-i-1,cache)
#             cache.pop()

#     dfs(0,n,[])
#     return reslut
# print(combinationSum3())
def deepestLeavesSum(self, root: TreeNode) -> int:
        from collections import deque
        que=deque()
        curr_som=0
        while len(que)!=0:
            elements=len(que)
            curr_som=0
            for i in range(len(elements)):
                node=que.popleft()
                curr_som+=node.val
                if not node.left:
                    que.append(node.left)
                if not node.right:
                    que.append(node.right)
        return curr_som