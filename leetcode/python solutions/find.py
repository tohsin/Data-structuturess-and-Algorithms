def oddNumbers(l=2, r=5):
    ans=[]
    for i in range(l,r+1):
        if i % 2 != 0:
            ans.append(i)
    print (ans)
oddNumbers()