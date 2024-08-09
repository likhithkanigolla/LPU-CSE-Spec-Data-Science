a=int(input())
sum=0
for x in range(1,a+1):
    if(a%x==0):
        sum=sum+x
b=sum//2
if(a==b):
    print('Perfect')
else:
    print('Not perfect')
