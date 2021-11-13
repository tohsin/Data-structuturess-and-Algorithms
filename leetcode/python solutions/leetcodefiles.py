def minOperations(logs=["./","../","./"]) -> int:
        tree=[]
        tree.append('main')
        for log in logs:
            if log =='./':
                #do nothing
                pass
            elif log == '../':
                if tree[-1]!='main':
                    tree.pop()
            elif log[-1]=='/':
                tree.append(log[:len(log)-2])
        return len(tree)-1
print(minOperations())