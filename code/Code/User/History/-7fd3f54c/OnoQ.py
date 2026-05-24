graph = {}

#Add node
def add_node(node):
    if node not in graph:
        graph[node]=[]
    else:
        print(f"Node {node} already exists in graph.")
    
#add edge
def add_edge(node1,node21:
    if node1 in graph and node2 in graph:
        if node2 not in graph[node1]:
            graph[node1].append(node2)
        if node1 not in graph[node2]:
            graph[node2].append(node1)
    else:
    print("One or both nodes not found")

