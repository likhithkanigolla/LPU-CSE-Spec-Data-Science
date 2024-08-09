sum=0
def sum1(n):
    if(n!=1):
        return(n+sum1(n-1))
    else:
        return 1
    
sum=sum1(50)
print(sum)
