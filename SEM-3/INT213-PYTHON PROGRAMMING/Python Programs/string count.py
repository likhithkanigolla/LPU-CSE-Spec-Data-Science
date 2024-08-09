import string
c=0
b=0
d=0
a='The box is ready'
for i in a:
    if(i.isupper()):
        c=c+1
    if(i.islower()):
        b=b+1
    if(i.isspace()):
        d=d+1
print(c,b,d)
