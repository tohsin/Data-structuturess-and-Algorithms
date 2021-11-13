def abreviation(a="beFgH",b="EFG"):
        j=0
        for i in range(len(a)):
            if j<len(b):
                if a[i].upper()==b[j] or a[i]==b[j]:
                    j+=1
            else:
                break
        if j != len(b):
            print ("NO")
        else:
            print ("YES")
abreviation()