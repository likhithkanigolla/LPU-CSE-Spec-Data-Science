def merge(a,b):
    c=[]
    while len(a)!=0 and len(b)!=0:
        if a[0]<b[0]:
            c.append(a[0])
            a.remove(a[0])
        else:
            c.append(b[0])
            b.remove(b[0])
    if len(a)==0:
        c+=b
    else:
        c+=a
    return c
def mergesort(x):
    if len(x)==0 or len(x)==1:
        return x
    else:
        middle=len(x)//2
        a=mergesort(x[:middle])
        b=mergesort(x[middle:])
        return merge(a,b)

a=[1,2,4,5,3,6,7,8,10,9]
print(mergesort(a))
