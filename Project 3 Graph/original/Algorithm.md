## Algorithm

1. Start.
2. Read the number of computers (vertices) and connections (edges).
3. Create an adjacency matrix to represent the graph.
4. Read the connections between computers.
5. Store each connection in the adjacency matrix.
6. Initialize all elements of the visited array to `0`.
7. Accept the starting computer from the user.
8. Call the DFS function with the starting vertex.
9. Mark the current vertex as visited.
10. Display the current vertex.
11. Check all adjacent vertices of the current vertex.
12. If an adjacent vertex is connected and not visited:
    - Call DFS recursively for that vertex.
13. Repeat the process until all reachable vertices are visited.
14. Display the DFS traversal order.
15. Stop.
