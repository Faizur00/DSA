# implementation of an graph using an adjacency list

def add_edge(adj, vertex, neighbor):
    adj[vertex].append(neighbor)
    adj[neighbor].append(vertex)
    # this one for undirected graph so we use also the reverese

def display_graph(adj):
    for vertex in range(len(adj)):
        print(f"{vertex}: ", end="")
        for neighbor in adj[vertex]:
            print(f"{neighbor} ", end="")
        print()

vertices =  4

adj = [[] for _ in range(vertices)]

add_edge(adj, 0, 1)
add_edge(adj, 0, 2)
add_edge(adj, 1, 2)
add_edge(adj, 2, 3)

print("adjacency list representation")
display_graph(adj)


# we can also use a defaultdict from collections to simplify the code
# defaultdict is a dictionary that returns a default value when a key is not found
from collections import defaultdict

dict_adj = defaultdict(list)

edges = [(0, 1), (0, 2), (1, 2), (2, 3)] # this is a list of edges that we want to add to the graph
for src, dst in edges:
    dict_adj[src].append(dst)
    dict_adj[dst].append(src) # since it's undirected graph we add the reverse as well

print("\nUsing defaultdict for adjacency list representation")
for node in dict_adj:
    print(f"{node}: {dict_adj[node]}")


