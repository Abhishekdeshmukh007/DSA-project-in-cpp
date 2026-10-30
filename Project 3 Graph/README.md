# Computer Network Graph Traversal Using DFS and BFS in C++

## 1. Project Title

Representation of Computers and Communication Links as a Graph Using DFS and BFS.

## 2. Introduction

A computer network consists of multiple computers connected through communication links. Graphs are used to represent such networks, where computers are represented as vertices and communication links are represented as edges.

This project implements Depth-First Search (DFS) and Breadth-First Search (BFS). An adjacency matrix is used to represent the graph, and visited information is used to avoid visiting vertices more than once.

## 3. Original Problem Statement

Develop a C++ program to represent computers and communication links as a graph. Apply Depth-First Search (DFS) from a selected computer and display the traversal order. Use a visited array or set to avoid visiting a vertex more than once.

## 4. Original Objectives

1. To represent a computer network using a graph.
2. To implement Depth-First Search (DFS) traversal.
3. To accept a selected starting vertex.
4. To use a visited array to avoid revisiting vertices.
5. To display the DFS traversal order.

## 5. Original Algorithm

1. Start.
2. Read the number of computers and connections.
3. Create an adjacency matrix to represent the graph.
4. Read the connections between computers.
5. Store each connection in the adjacency matrix.
6. Initialize all elements of the visited array to `0`.
7. Accept the starting computer from the user.
8. Call the DFS function with the starting vertex.
9. Mark the current vertex as visited.
10. Display the current vertex.
11. Check all adjacent vertices of the current vertex.
12. If an adjacent vertex is connected and not visited, recursively call DFS for that vertex.
13. Continue until all reachable vertices are visited.
14. Display the DFS traversal order.
15. Stop.

## 6. Original Sample Output

```text
Enter number of computers: 5
Enter number of connections: 5
Enter connections (u v):
0 1
0 2
1 3
1 4
2 4
Enter starting computer: 0

DFS Traversal: 0 1 3 4 2
```

---

# MODIFICATIONS

## 7. Modified Problem Statement

Modify the C++ program to perform Depth-First Search (DFS) on a computer network graph from a user-selected starting vertex. Display the DFS traversal order, identify reachable and unvisited vertices, count the number of reachable vertices, and display the BFS level of each reachable vertex using a queue.

## 8. Modified Objectives

1. To allow the user to select a different starting vertex.
2. To display the DFS traversal order.
3. To identify and display reachable vertices.
4. To identify and display unvisited vertices.
5. To count the total number of reachable vertices.
6. To implement Breadth-First Search (BFS) to determine the level of each reachable vertex.
7. To use visited information and BFS levels to avoid revisiting vertices.

## 9. Modifications Performed

### A. Different Starting Vertex

- Accept a different starting vertex from the user.
- Perform DFS traversal from the selected vertex.
- Display the traversal order.

### B. Reachable and Unvisited Vertices

- Identify all vertices reachable from the starting vertex.
- Display all reachable vertices.
- Display all unvisited vertices that are not reachable from the starting vertex.

### C. Count Reachable Vertices and Display BFS Levels

- Count the total number of reachable vertices using DFS.
- Implement BFS using a queue.
- Calculate the BFS level of each reachable vertex.
- Display unreachable vertices separately.

## 10. Modified Algorithm

1. Start.
2. Read the number of computers and connections.
3. Create an adjacency matrix to represent the graph.
4. Read all connections and store them in the adjacency matrix.
5. Accept the starting vertex from the user.
6. Initialize the visited array to `0` and reachable vertex count to `0`.
7. Perform DFS from the selected starting vertex.
8. Mark the current vertex as visited.
9. Display the current vertex and increment the reachable vertex count.
10. Recursively visit all adjacent unvisited vertices.
11. Display the DFS traversal order.
12. Display all reachable vertices using the visited array.
13. Display all unvisited vertices.
14. Display the total number of reachable vertices.
15. Initialize all BFS levels to `-1`.
16. Set the starting vertex level to `0` and insert it into a queue.
17. Remove a vertex from the queue and check its adjacent vertices.
18. If an adjacent vertex has a BFS level of `-1`, assign its level as the current vertex level plus one and insert it into the queue.
19. Repeat until the queue becomes empty.
20. Display the BFS level of each reachable vertex.
21. Display unreachable vertices.
22. Stop.

## 11. Modified Sample Output

```text
Enter number of computers: 5
Enter number of connections: 3
Enter connections (u v):
0 1
1 2
3 4
Enter starting computer: 0

DFS Traversal: 0 1 2
Reachable vertices: 0 1 2
Unvisited vertices: 3 4
Number of reachable vertices: 3

Computer        BFS Level
0               0
1               1
2               2
3               Unreachable
4               Unreachable
```

## 12. Comparison Between Original and Modified Program

| Feature | Original Program | Modified Program |
|---|---|---|
| Graph representation | Adjacency matrix | Adjacency matrix |
| DFS traversal | Yes | Yes |
| User-selected starting vertex | Yes | Yes |
| Reachable vertices | No | Yes |
| Unvisited vertices | No | Yes |
| Reachable vertex count | No | Yes |
| BFS traversal | No | Yes |
| BFS levels | No | Yes |

## 13. Applications

1. Computer network connectivity checking.
2. Network topology analysis.
3. Finding connected computers in a network.
4. Network path exploration.
5. Communication network analysis.
6. Learning graph traversal techniques.

## 14. Time and Space Complexity

### Original DFS

- **Time Complexity:** `O(V²)` using an adjacency matrix.
- **Space Complexity:** `O(V²)` for the adjacency matrix, plus `O(V)` for the visited array and recursion stack.

### Modified DFS and BFS

- **DFS Time Complexity:** `O(V²)`.
- **BFS Time Complexity:** `O(V²)`.
- **Space Complexity:** `O(V²)` for the adjacency matrix, plus `O(V)` auxiliary space.

Here, `V` represents the number of vertices (computers).

## 15. Conclusion

The project successfully represents a computer network using a graph and implements DFS traversal. The original program displays the DFS traversal order from a selected starting computer.

The modified program extends the functionality by displaying reachable and unvisited vertices, counting reachable vertices, and calculating BFS levels using a queue.

Thus, the project demonstrates the practical application of DFS and BFS graph traversal algorithms in computer networks.

## 16. Technologies Used

- **Programming Language:** C++
- **Graph Representation:** Adjacency Matrix
- **Algorithms:** Depth-First Search (DFS), Breadth-First Search (BFS)
- **Data Structures:** Array, Queue
- **Concepts:** Recursion, Graph Traversal, Visited Array
- **Compiler:** GCC, Code::Blocks, or Visual Studio

---

**Note:** Vertices are numbered from `0` to `n-1`. The graph is undirected, so each entered connection is stored in both directions.
