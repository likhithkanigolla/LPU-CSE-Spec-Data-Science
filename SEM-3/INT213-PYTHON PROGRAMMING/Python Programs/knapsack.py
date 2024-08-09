capacity=float(input('Enter The Capacity'))
c=capacity
n=int(input('Enter no. of items'))
items=[]
weight=[]
price=[]
ratio=[]
for i in range(n):
    items.append(input('Enter Item name'))
    weight.append(float(input('Enter item name weight')))
    price.append(float(input('Enter item price')))
    ratio.append(price[i]/weight[i])

choice=int(input('Enter 1 for minimizing weight\n2 for maximizing price\n3 for maximising density'))
count=0
w=0
totalsum=0
while count<n:
    if choice==1:
        mweight=min(weight)
        pos=weight.index(mweight)
    elif choice==2:
        mprice=max(price)
        pos=price.index(mprice)
        mweight=weight[pos]
    else:
        mratio=max(ratio)
        pos=ratio.index(mratio)
        mweight=weight[pos]
    if mweight<=capacity:
        print(items[pos],'Inserted into bag')
        totalsum=totalsum+price[pos]
        w=w+mweight
        capacity=c-w
        
    del items[pos]
    del weight[pos]
    del price[pos]
    del ratio[pos]
    count=count+1
    if c==w:
        break
print('Total price in bag',totalsum,'\nTotal weight of bag:',w)



