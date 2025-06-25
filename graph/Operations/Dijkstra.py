import heapq

def dijkstra(n, edges, start):
    # Build the adjacency list
    graph = [[] for _ in range(n)]
    for u, v, w in edges:
        graph[u].append((v, w))  # (destination, weight)

    # Initialize distance array
    dist = [float('inf')] * n
    dist[start] = 0

    # Priority queue: (distance, node)
    heap = [(0, start)]

    while heap:
        current_dist, u = heapq.heappop(heap)

        # Skip if we’ve already found a better way
        if current_dist > dist[u]:
            continue

        for v, weight in graph[u]:
            if dist[u] + weight < dist[v]:
                dist[v] = dist[u] + weight
                heapq.heappush(heap, (dist[v], v))

    return dist

edges = [
    (0, 1, 4),
    (0, 2, 1),
    (2, 1, 2),
    (1, 3, 1),
    (2, 3, 5)
]

n = 4
start = 0

print(dijkstra(n, edges, start))

