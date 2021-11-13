def makeConnected(n,connections) -> int:
        groups = [i for i in range(n)]
        n_groups = n
        n_connections = len(connections)
        group_a
        def find(a):
            group_a = groups[a]
            if group_a == a:
                return a
            
            groups[group_a] = find(group_a)
            return groups[group_a]
            
        def same(a, b):
            return find(a) == find(b)
        
        def unite(a, b):
            group_a = find(a)
            group_b = find(b)

            if group_a != group_b:
                n_groups -= 1
                n_connections -= 1
                groups[group_a] = group_b
            
        
        
        for u,v in connections:
            if not same(u, v):
                unite(u, v)
                
        return -1 if n_groups - 1 > n_connections else n_groups - 1
print(makeConnected(4, [[0,1],[0,2],[1,2]]))