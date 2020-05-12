def normalize(name):
    '''if name[0]!='':
        name[0]-=32
    return name'''
    '''def normalize(name):
    name=name.title()
    return name'''
    def prod(L):
        def fn(x,y):
            return x*y
    return reduce(fn,L)
            
