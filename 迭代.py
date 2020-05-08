def findMinAndMax(L):
    min = max = None
    if L:  
        min = max = L[0]
        for i in L:
            if min > i:
                min = i
            if max < i:
                max = i 
    return min,max
