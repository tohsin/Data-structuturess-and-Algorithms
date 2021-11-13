def compareVersion( version1="1.0", version2=""):
    v1=version1.split('.')
    v2=version2.split('.')
    longest=max(len(v1),len(v2))
    if len(v1)==longest:
        for j in range(longest-len(v2)):
            v2.append(0)
    else:
        for j in range(longest-len(v1)):
            v1.append(0)
    for i in range(len(v1)):
        if int(v1[i]) < int(v2[i]):
            return '-1'
        if int(v1[i]) > int(v2[i]):
            return '1'
    return '0'
print(compareVersion())