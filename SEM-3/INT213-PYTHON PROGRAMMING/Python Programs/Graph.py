n=int(input('No. of vertices'))
nodes=[]
edges={}
print('Enter Vertices')
for i in range(n):
    nodes.append(input('Enter %d vertics' %i))
    edges[nodes[i]]=[]
print('Enter Edges')
while(True):
    choice=int(input('Enter 1 to add & 0 to exit'))
    if choice==0:
        break
    else:
        src=input('Enter Source')
        dest=input('Enter Destination')
        if not(src in nodes or dest in nodes):
            raise ValueError('Nodes not in graph')
        else:
            edges[src].append(dest)
for i in nodes:
    for j in edges[i]:
        print(i,'-->',j)
