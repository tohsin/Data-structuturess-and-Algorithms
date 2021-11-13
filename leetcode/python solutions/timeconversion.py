def timeConversion(s="07:05:45PM"):
    answer=""
    if int(s[:2]) <12 and s[8:10]=="AM":
        return s[:9]
    elif s[8:10]=="PM":
        f=str(12+int(s[:2]))
        answer+=f+s[2:8]
        return answer
    

print(timeConversion())
