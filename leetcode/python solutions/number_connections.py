class Solution:
    def makeConnected(self, n,connections) -> int:
        def find(a):
            group_a = self.groups[a]
            if group_a == a:
                return a
            
            self.groups[group_a] = find(group_a)
            return self.groups[group_a]
            
        def same(a, b):
            return find(a) == find(b)
        
        def unite(a, b):
            group_a = find(a)
            group_b = find(b)

            if group_a != group_b:
                self.n_groups -= 1
                self.n_connections -= 1
                self.groups[group_a] = group_b
            
        self.groups = [i for i in range(n)]
        self.n_groups = n
        self.n_connections = len(connections)
        
        for u,v in connections:
            if not same(u, v):
                unite(u, v)
                
        return -1 if self.n_groups - 1 > self.n_connections else self.n_groups - 1
obj= Solution()
print(obj.makeConnected(4, [[0,1],[0,2],[1,2]]))