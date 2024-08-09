def fab(n):
    if n<=1:
        return n
    else:
        return(fab(n-1)+fab(n-2))
n=int(input())
for i in range(n):
    print(fab(i))
