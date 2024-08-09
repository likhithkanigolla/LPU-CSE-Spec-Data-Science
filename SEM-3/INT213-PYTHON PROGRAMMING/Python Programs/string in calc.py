import string
a=input('Enter a string')
i = 0
for x in range(len(a)):
    if(a[x]=='+'):
        i=x
        break;
sum=int(a[:i])+int(a[i+1:])
print(sum)

