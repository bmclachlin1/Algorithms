graph = {'A': ['B', 'C'],
         'B': ['A', 'D', 'E'],
         'C': ['A'],
         'D': ['B'],
         'E': ['B', 'F'],
         'F': ['E']}

seen = set()

def dfs(start):
    seen.add(start)
    print(start, end=' ')

    for neighbor in graph[start]:
        if neighbor not in seen:
            dfs(neighbor)

dfs('A')

