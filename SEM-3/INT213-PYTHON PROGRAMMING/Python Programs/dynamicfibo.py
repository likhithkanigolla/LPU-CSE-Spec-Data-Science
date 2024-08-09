previous={0:0,1:1}

def fibo(n):
    if n in previous.keys():
        return previous[n]
    else:
        newvalue=fibo(n-1)+fibo(n-2)
        previous[n]=newvalue
        return newvalue
print(fibo(4))
print(previous)
