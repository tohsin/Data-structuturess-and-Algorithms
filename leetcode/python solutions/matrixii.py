def generateMatrix(n):
        # arr=[ [0] *n ] *n
        arr=[]
        for i in range(n):
            arr.append([None]*n)
        instructions=[[1,0],[0,1],[-1,0],[0,-1]]
        val=2
        row=col=pointer=0
        arr[0][0]=1
        while val <=n*n:
            x,y=instructions[pointer]
            if row+y< n and col+x<n and row+y>=0 and col+x>=0:
                if arr[row+y][col+x]==None:
                    arr[row+y][col+x]=val
                    row+=y
                    col+=x
                    val+=1
                else:
                   pointer=updatepointer(pointer)
            else:
                pointer=updatepointer(pointer)
        return arr
def updatepointer(pointer):
        if pointer ==3:
            pointer=0
        else:
            pointer+=1
        return pointer
print(generateMatrix(n=4))
            