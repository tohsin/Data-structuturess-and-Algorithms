def cutTheSticks(arr=[8 ,8 ,14 ,10, 3, 5, 14, 12]):
    a=arr
    answer=[]
    while True:
        if a==a[::-1]:
            answer.append(len(a))
            break
        answer.append(len(a))
        val=min(a)
        a=list(filter(lambda b: b != val, a))
        for i in range(len(a)):
            a[i]-=val
    return answer

print(cutTheSticks())