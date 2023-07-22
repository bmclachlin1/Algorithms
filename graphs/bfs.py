from collections import deque


graph = {'A': ['B', 'C'],
         'B': ['A', 'D', 'E'],
         'C': ['A'],
         'D': ['B'],
         'E': ['B', 'F'],
         'F': ['E']}

seen = set()

def bfs(start):
    queue = deque([start])

    while queue:
        vertex = queue.popleft()
        print(vertex, end=' ')
        seen.add(vertex)

        for neighbor in graph[vertex]:
            if neighbor not in seen:
                queue.append(neighbor)

bfs('A')

