def binarysearch(Ist,l,r,x):
    while l<=r:
        mid =(l+r)//2;
        if Ist[mid]==x:
            return mid
        elif Ist[mid]<x:
            l=mid+1
        else:
            r=mid-1
    return -1
a=[]
b=int(input('Enter no. of Elements'))
for i in range(b):
    c=int(input('Enter No. one by one'))
    a.append(c)
x=int(input('Enter element to be searched'))
result=binarysearch(a.sort(),0,len(a)-1,x)

if result!=-1:
    print('Element is present at index %d' %result)
else:
    print('Element is not present in list')
