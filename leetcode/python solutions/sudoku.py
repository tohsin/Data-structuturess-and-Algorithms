
board=[
    ["5","3","."    ,".","7","."   ,'.','.','.'],
    ["6",'.','.'    ,"1","9","5"   ,'.','.','.'],
    ['.',"9",'8'    ,'.','.','.'   ,'.','6','.'],

    ['8','.','.'    ,'.','6','.'   ,'.','.','3'],
    ['4','.','.'    ,'8','.','3'   ,'.','.','1'],
    ['7','.','.'    ,'.','2','.'   ,'.','.','6'],

    ['.','6','.'    ,'.','.','.'   ,'2','8','.'],
    ['.','.','.'    ,'4','1','9'   ,'.','.','5'],
    ['8','.','.'    ,'.','6','.'   ,'.','.','3'],

]
def solveSoduku():
    for row in range(9):
        for col in range(9):
            if  board[row][col]==".":
                for i in range(1,10):
                    if isPossible(board,row,col,i):
                        board[row][col]=str(i)
                        if solveSoduku():
                            return True
                        else:   
                            board[row][col]="."
                return False
    
def isPossible(board,x,y,value):
    import math
    for i in range(9):
        val=board[x][i]
        if str(value)==board[x][i]:return False
            
    for i in range(9):
        car=board[i][y]
        if str(value)==board[i][y]:return False
        #same square
    range_x=math.ceil((x+1)/3)*3
    range_y=math.ceil((y+1)/3) *3
    
    for i in range(range_x-3,range_x):
        for j in range(range_y-3,range_y):
            ski=board[i][j]
            if str(value) == board[i][j]:return False
    return True
print(board)
solveSoduku()
print(board)
