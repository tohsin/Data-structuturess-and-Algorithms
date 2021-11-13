
[1,2,3,null,4,null,5]

def isCousins(root,x,y) -> bool:
        q=[]
        q.append([root,None])
        found1=[]
        while len(q) !=0:
            length=len(q)
            for i in range(length):
                node=q.pop(0)
                if node[0].val==x or node[0].val==y:
                    found1.append(node)
                if len(found1)==2:
                    if found1[0][1]==found1[1][1]:
                        return True
                    else:
                        return False
                if node[0].left is not None:
                    q.append([node[0].left,root.val])
                if node[0].right is not None: 
                    q.append([node[0].right,root.val])
            if len(found1)==1:
                return False
            