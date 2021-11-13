cw=[
    ["+","+","+","+","+","+","-","+","+","+"],

    ["+","+","-","-","-","-","-","-","+","+"],

    ['+','+','+','+','+','+','-','+','+','+'],

    ['+','+','+','+','+','+','-','+','+','+'],   

    ['+','+','+','-','-','-','-','-','-','+'],

    ['+','+','+','+','+','+','-','+','-','+'],

    ['+','+','+','+','+','+','-','+','-','+'],

    ['+','+','+','+','+','+','+','+','-','+'],

    ['+','+','+','+','+','+','+','+','-','+'],

    ['+','+','+','+','+','+','+','+','-','+']]

wo=['ICELAND','MEXICO','PANAMA','ALMATY']
cach={}
# br={LONDONC:1}
for i in range(len(wo)):
    cach[wo[i]]=0

def ishorizontal(slot,row,column):
            #if element to right is empty then we are solving horizontal
        if slot[row][column+1]=="-":
            return True
            #if element down is empty then we are solving vertical
        elif slot[row+1][column] == '-':
            return False

def extraString(hor,crossword,row,column):
    extra_str=""
    if hor:               #if we are not at the edge already
        if column !=0:
        #to check to the left if a lettter is occupied
        #if its not - or + then it must contain a letter
            if crossword[row][column-1] != "-"or crossword[row][hor-1] != "+":                         
                hor=column
                length_hor_extra=0
                                    #loop to know how long the extra string is and the string itself
                while hor <=10 and hor >=0:
                    if crossword[row][hor-1] != "-"  and crossword[row][hor-1] != "+":
                        extra_str+=crossword[row][hor-1]
                    else:
                        break
                    length_hor_extra+=1
                    hor -=1
    else:
        if row !=0:
            if crossword[row-1][column] != "-":         
                ver=row
                length_ver_extra=0
              #loop to know how long the extra string is and the string itself
                while ver <=10 and ver >=0:
                    if crossword[ver-1][column] != "-" and crossword[ver-1][column] != "+":
                        extra_str+=crossword[ver-1][column]
                    else:
                        break
                    length_ver_extra+=1
                    ver -=1
                    """extra string section ends here"""
    return extra_str

def crosswordPuzzle(crossword,cache):
    for row in range(10):
        for column in range(10):
            if row==9 and column==9:return
            if crossword[row][column] == "-":
                if ishorizontal(crossword,row,column):
                    extra_st=extraString(True,crossword,row,column)
                    extra_st_len=len(extra_st)
                    for key in cache:
                        key_len=len(key)
                        if len(extra_st) <len(key)  and key[:extra_st_len]==extra_st and cache[key] == 0:  
                            index=0
                            access_key=len(key[len(extra_st):])
                            hor_col=column
                            while index< access_key:
                                if crossword[row][hor_col+index] == "-":
                                    crossword[row][hor_col+index]= key[len(extra_st):][index]
                                elif crossword[row][hor_col+index]== "+":
                                    break
                                else:
                                    if crossword[row][hor_col+index] != key[len(extra_st):][index]:
                                        break
                                index+=1
                            cache[key] = 1
                            if hor_col+index<10  and crossword[row][hor_col+index] == "-":                      
                                break
                        else:
                            continue
                        crosswordPuzzle(crossword,cache)
                        if row==9 and column==9 :return
                        # for j in range(index,-1,-1):
                        #     crossword[row][j+index]="-"
                        # cache[key] == 0
                        return
                if not(ishorizontal(crossword,row,column)):
                    extra_st=extraString(False,crossword,row,column)
                    extra_st_len=len(extra_st)
                    for key in cache:
                        key_len=len(key)
                        if len(extra_st) <key_len and key[:extra_st_len]==extra_st and cache[key] == 0:                           
                            index=0
                            access_key=len(key[len(extra_st):])
                            ver_row=row
                            while index< access_key:
                                if crossword[ver_row+index][column] == "-":
                                    crossword[ver_row+index][column] = key[len(extra_st):][index]
                                elif crossword[ver_row+index][column]== "+":
                                    break
                                else:
                                    if crossword[ver_row+index][column] != key[len(extra_st):][index]:
                                        break
                                index+=1
                            cache[key] = 1
                            if ver_row+index<10 and crossword[ver_row+index][column] == "-":
                                break
                        else:continue
                        crosswordPuzzle(crossword,cache)
                        if row==9 and column==9 :return
                        # for j in range(index,-1,-1):
                        #     crossword[j+index][column]="-"
                        # cache[key] == 0
                        return



crosswordPuzzle(cw,cach)                   
print (cw)
