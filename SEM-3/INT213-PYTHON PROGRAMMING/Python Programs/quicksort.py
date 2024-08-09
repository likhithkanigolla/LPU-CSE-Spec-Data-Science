def partition(Ist,low,high):
    i=(low-1)
    pivot=Ist[high]
    for j in range(low,high):
        if Ist[j]<=pivot:
            i=i+1
            Ist[i],Ist[j]=Ist[j],Ist[i]


    Ist[i+1],Ist[high]=Ist[high],Ist[i+1]
    return(i+1)
def quicksort(Ist,low,high):
    if low < high:
        pi=partition(Ist,low,high)
        quicksort(Ist,low,pi-1)
        quicksort(Ist,pi+1,high)
        
a=[]
b=int(input('Enter no. of elements'))
for i in range(b):
    c=int(input('Enter number one by one'))
    a.append(c)
n=len(a)
quicksort(a,0,n-1)
print('Sorted Istay is:')
for i in range(n):
    print('%d' %a[i])
    print(mergesort(a))
