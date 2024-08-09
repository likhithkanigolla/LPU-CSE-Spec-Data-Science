n=int(input("Number of Vertices : "))
nodes=[]
edges={}
print("Enter Vertices : ")
for i in range(n):
    nodes.append(input("Enter vertex no. %d: "%(i+1)))
    edges[nodes[i]]=[]
print("Enter Edges : ")
while True:
    choice=int(input("Enter  1 to add and 0 to exit..."))
    if choice==0:
        break
    else:
        src=input("Enter Source : ")
        dest=input("Enter Destination : ")
        if not(src in nodes and dest in nodes):
            raise ValueError("Node not in Graph")
        else:
            edges[src].append(dest)
            for i in nodes:
                for j in edges[i]:
                    print(i,"-->",j)
