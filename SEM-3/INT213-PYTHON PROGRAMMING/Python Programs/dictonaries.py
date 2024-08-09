d={}
a=int(input('Enter count of numbers'))
i=0
while(i<a):
    b=input('Enter key')
    if b in d:
        print('Key already exixts')
    else:
        c=int(input('Enter values'))
        d[b] = c
        i=i+1
print(d.items())
