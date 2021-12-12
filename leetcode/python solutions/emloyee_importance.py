
class Solution:
    def __init__(self) -> None:
        pass
    def getImportance(self, employees, id) -> int:
            tree={}
            self.count=0
            for i in range( len(employees)):
                tree[employees[i].id]=i
            def dfs(node):
                if employees[tree[node]]:
                    self.count+=employees[tree[node]].importance
                    for subord in employees[tree[node]].subordinates:
                        dfs(subord)
            dfs(id)    
            return self.count
class Employee:
    def __init__(self, id, importance, subordinates):
        self.id = id
        self.importance = importance
        self.subordinates = subordinates
a=Employee(1,5,[2,3])
b=Employee(2,3,[4])
c=Employee(3,4,[])
d=Employee(4,1,[])
soln=Solution()
print(soln.getImportance( [a,b,c,d],   1))