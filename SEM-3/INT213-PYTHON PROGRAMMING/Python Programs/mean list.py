a=[]
k=int(input("Enter the length of list"))
for i in range(k):
      j=int(input())
      a.append(j)
s=0
for i in a:
  s=s+i
b=len(a)
c=s/b
d=0
for i in range(0,5):
    d=d+((a[i]-c)**2)
e=len(a)
g=e-1
f=(d/g)
h=f**0.5
print(h)
