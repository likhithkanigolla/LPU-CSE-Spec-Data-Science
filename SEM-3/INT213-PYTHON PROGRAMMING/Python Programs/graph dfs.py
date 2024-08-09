graph={'a':['b','c'],'b':[],'c':['d','e'],'d':[],'e':[]}
def dfs(graph,s):
    stack=[]
    visited=[]
    stack=[s]
    while stack:
        node=stack.pop()
        if node not in visited:
            visited.append(node)
            stack=stack+graph[node]
    return visited
print(dfs(graph,'a'))
