import string
flag=0
a='The quick brown fox jump over the lazy dog'
a1=a.lower()
for i in string.ascii_lowercase:
    if(i in a1):
        flag=1
    else:
        flag=0
        print('Not pangram')
        break
if(flag==1):
    print('pangram')

