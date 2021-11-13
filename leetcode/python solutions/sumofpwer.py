def count_expressions(x, n, vals):
    
    s = sum(v**n for v in vals)
    # print(vals)
    # print (s)
    if s == x:
        return 1
    else:
        answer = 0
        # print( vals)
        v = vals[-1] + 1 if vals else 1
        # print(v)
        b=s+v**n
        while s + v**n <= x:
            answer += count_expressions(x, n, vals + [v])
            v += 1
        return answer
print(count_expressions(x=29,n= 2,vals=[]))