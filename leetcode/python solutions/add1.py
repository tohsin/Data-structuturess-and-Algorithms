def plusOne(digits=[9,9]):
    for i in range(len(digits)-1,-1,-1):
        if digits[i]==9:
            digits[i]=0
        else:
            digits[i] +=1
                # break
            return digits
    digits=[1] + digits
    
    return digits
print(plusOne())