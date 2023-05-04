

def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()
    visited.add(start)
    print(start , '->',list(graph[start]))
    for next in graph[start] - visited:
        dfs(graph, next, visited)
    return visited


gdict = {
    "a": set(["b", "c","a"]),
    "b": set(["a", "d"]),
    "c": set(["a", "d"]),
    "d": set(["a"]),
    "e": set(["a"])
}
dfs(gdict, 'a')
