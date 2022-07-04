## Minimum time to collect all apples

[Question Link](https://leetcode.com/problems/minimum-time-to-collect-all-apples-in-a-tree/)

## Solution

```python
class Solution:

    def find_tree(self, graph, visited, hasApple, node, parent):
        if(visited[node] == False):
            visited[node] = True
            for child in graph[node]:
                if(hasApple[child] and parent!=child): 
                    hasApple[parent] = True
                self.find_tree(graph, visited, hasApple, child, node)
        print(hasApple)

    def minTime(self, n: int, edges: List[List[int]], hasApple: List[bool]) -> int:
        graph = [[] for i in range(n)]
        for edge in edges:
            graph[edge[0]].append(edge[1])            
            graph[edge[1]].append(edge[0])
        visited = [False] * n

        self.find_tree(graph, visited, hasApple, 0, -1)
        print(hasApple)
```
