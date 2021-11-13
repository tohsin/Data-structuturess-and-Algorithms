def queensAttack(n=5, k=3, r_q=4, c_q=3, obstacles=[[5 ,5],
                                                    [4, 1],
                                                    [2 ,3]]):
    #count squares to up
    count=0
    #all the horizontals that matter
    hor,ver=[1,n],[1,n]
    diag1=[]
    diag2=[]
    dia1=r_q+c_q
    dia2=c_q-r_q
    for obs in obstacles:
        y=obs[0]
        x=obs[1]
        if x==c_q:
            if y<r_q:ver[0]=max(y+1,ver[0])
            elif y>r_q:ver[0]=min(y-1,ver[1])          
        elif y==r_q:
            if x<c_q:hor[0]=max(x+1,hor[0])
            elif x>c_q:hor[0]=min(x-1,hor[1]) 

        elif x+y==dia1:diag1.append(obs)
        elif x-y==dia2:diag2.append(obs)
    count+=ver[1]-ver[0]-1
    count+=hor[1]-hor[0]-1
    print(hor,diag1,diag2,ver)
    
       
    
queensAttack()