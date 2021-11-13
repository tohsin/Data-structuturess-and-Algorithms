
cw=[
    ["+","-","+","+","+","+","+","+","+","+"],

    ["+","-","+","+","+","+","+","+","+","+"],

    ['+','-','+','+','+','+','+','+','+','+'],

    ['+','-','-','-','-','-','+','+','+','+'],   

    ['+','-','+','+','+','-','+','+','+','+'],

    ['+','-','+','+','+','-','+','+','+','+'],

    ['+','+','+','+','+','-','+','+','+','+'],

    ['+','+','-','-','-','-','-','-','+','+'],

    ['+','+','+','+','+','-','+','+','+','+'],

    ['+','+','+','+','+','-','+','+','+','+']]
wo=['LONDON','DELHI','ICELAND','ANKARA']

def Fit_in(length_space, index_searching     ,words   ,string_known=""  ):
    if string_known == "":
        for i in range(index_searching ,len(words)):
            if len(words[i])==length_space:
                return [words[i] ,i]
            
        return None
    else:
        length_kini=len(string_known)
        for i in range(index_searching,len(words)):
            if words[i][0:length_kini]==string_known:
                if length_space==len(words[i][length_kini:]):
                    return [words[i][length_kini:] ,i]
                
        return None


def ishorizontal(slot,row,column):
            #if element to right is empty then we are solving horizontal
        if slot[row][column+1]=="-":
            return True
            #if element down is empty then we are solving vertical
        elif slot[row+1][column] == '-':
            return False



#convert the word to a dictionary
def crosswordPuzzle(crossword, words):
    for row in range(10):
        for column in range(10):    
            #if the slot we are in is empty
            if crossword[row][column] == "-":
                if ishorizontal(crossword,row,column) :
                    """this section is if there is an extra string to left so 
                    we search with it"""
                    extra_str=""
                    #if we are not at the edge already
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
                    """section for extra string ends here"""
                    #where to start searching from
                    len_ish=column
                    acc_len_right=1
                    #loop to continue right  to see how far the empty slot is
                    while len_ish <10:
                        if crossword[row][len_ish+1]=="-":
                            len_ish+=1
                            acc_len_right+=1
                        else:
                            break
                        
                    word=Fit_in(acc_len_right,0,words,extra_str)
                    if word != None:
                        for i in range(acc_len_right):
                            crossword[row][column+i]=word[0][i]
                        continue
                        # crosswordPuzzle(crossword,words)
                    else:
                        return
                #so its vertical here
                if not(ishorizontal(crossword,row,column)):
                    """this section is if there is an extra string to left so 
                    we search with it"""
                    extra_str=""
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

                    trans_ver=row
                    acc_length_down=1
                    #loop to continue right  to see how far the empty slot is
                    while trans_ver+1 <10:
                        
                        if crossword[trans_ver+1][column]=="-":
                            trans_ver+=1
                            acc_length_down+=1
                        else:
                            break
                    word_vert=Fit_in(acc_length_down,0,words,extra_str)
                    if word_vert !=None:
                        for i in range(0,acc_length_down):
                            crossword[row+i][column] =word_vert[0][i]
                        continue
                        # crosswordPuzzle(crossword,words)
                    else:
                        return

           
crosswordPuzzle(cw,wo)
print(cw)


                    
                



                
                

          
        
				
      
      
  
          
          
          
