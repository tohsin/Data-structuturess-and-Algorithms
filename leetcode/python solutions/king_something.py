def gameOfThrones(s="aaabbbb"):
    prev_slot=s[0]
    cuur_count=0
    number_of_ods=0
    for i in range(len(s)):
        if s[i] == prev_slot:
                cuur_count+=1
        else:
            prev_slot=s[i]
            if cuur_count %2!=0:number_of_ods+=1
            cuur_count=1
        if number_of_ods>1:return "no"
    if cuur_count %2!=0:number_of_ods+=1
    if number_of_ods>1:return "no"
    return "yes"
print(gameOfThrones())