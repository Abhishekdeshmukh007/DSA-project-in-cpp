## Modified Algorithm

1. Start.
2. Read the number of computers (vertices) and connections (edges).
3. Create an adjacency matrix to represent the graph.
4. Read all connections between computers and store them in the adjacency matrix.
5. Accept the starting vertex from the user.
6. Initialize the visited array to `0` and reachable vertex count to `0`.
7. Perform DFS from the selected starting vertex:
   - Mark the current vertex as visited.
   - Display the current vertex.
   - Increment the reachable vertex count.
   - Visit all adjacent unvisited vertices recursively.
8. Display the DFS traversal order.
9. Display all reachable vertices using the visited array.
10. Display all unvisited vertices.
11. Display the total number of reachable vertices.
12. Initialize all BFS levels to `-1`.
13. Set the starting vertex level to `0` and insert it into a queue.
14. Remove a vertex from the queue and check its adjacent vertices.
15. If an adjacent vertex is unvisited in BFS:
    - Assign its level as the current vertex level plus one.
    - Insert it into the queue.
16. Repeat Steps 14–15 until the queue becomes empty.
17. Display the BFS level of each reachable vertex.
18. Display unreachable vertices.
19. Stop.
