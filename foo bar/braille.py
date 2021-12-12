def solution(s):
    mem={ "a":	1,
        'b'	:	12,
        'c'	:	14,
        'd'	:	145,
        'e'	:	15,
        'f'	:	124,
        'g'	:	1245,
        'h'	:	125,
        'i'	:	24,
        'j'	:	245,
        'k'	:	13,
        'l'	:	123,
        'm'	:	134,
        'n'	:	1345,
        'o'	:	135,
        'p'	:	1234,
        'q'	:	12345,
        'r'	:	1235,
        's'	:	234,
        't'	:	2345,
        'u'	:	136,
        'v'	:	1236,
        'w'	:	2456,
        'x'	:	1346,
        'y'	:	13456,
        'z'	:	1356 ,
        }
    
  
    cache=[0,0,0,0,0,0]
    answer=""
    for i in range(len(s)):
        if s[i]==" ":
            answer+="000000"
            continue
        if s[i].isupper():
            answer+="000001"
            
        for j in range(len(str(mem[s[i].lower()]))):
            cache[int(str(mem[s[i].lower()])[j])-1]=1
        x="".join(str(n) for n in cache)
        answer+=x
        cache=[0,0,0,0,0,0]
    return answer
    

    
    
if (solution("The quick brown fox jumps over the lazy dog")=="000001011110110010100010000000111110101001010100100100101000000000110000111010101010010111101110000000110100101010101101000000010110101001101100111100011100000000101010111001100010111010000000011110110010100010000000111000100000101011101111000000100110101010110110"):
    print("corrent")
else:
    print("wrong")
        
    