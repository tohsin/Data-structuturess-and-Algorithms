def migratoryBirds(arr):
    arr.sort
    cache,val_,key_={},None, None
    for i in range(0,len(arr),2):
        if int(arr[i]) in cache:
            cache[int(arr[i])]+=1
        else:
            cache[int(arr[i])] = 1
    for keys, values in cache.items():
      if val_==None or val_<values:
          val_=values
          key_=keys
        if val_==values:
            if keys<key_:
                key_=keys
    return (key_)
    

