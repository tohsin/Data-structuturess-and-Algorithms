def flipAndInvertImage(image):
        for row in range(len(image)):
            if (len(image[0])%2)!=0: #odd
                image[row][len(image[0]  )//2]=fliper(image[row][len(image[0]  )//2])
            for col in range(len(image[0]  )//2):
                temp=image[row][col]
                k=len(image[row])-col-1
                v=image[row][len(image[row])-col-1]
                
                image[row][col] =   fliper(v)
                
                image[row][len(image[row])-col-1]=fliper(temp)
        return image
def fliper(x):
    if x==1:
        return 0
    else:
        return 1
        
flipAndInvertImage([[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]])