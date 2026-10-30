## Modified Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Enter number of computers and connections/]
    B --> C[Create adjacency matrix]
    C --> D[/Enter computer connections/]
    D --> E[Store connections in adjacency matrix]
    E --> F[/Enter starting vertex/]
    F --> G[Initialize visited array and count]
    G --> H[Perform DFS from starting vertex]
    H --> I[Mark vertex as visited]
    I --> J[Display vertex and increment count]
    J --> K{Any unvisited adjacent vertex?}
    K -- Yes --> H
    K -- No --> L[Display DFS traversal order]
    L --> M[Display reachable vertices]
    M --> N[Display unvisited vertices]
    N --> O[Display reachable vertex count]
    O --> P[Initialize BFS levels to -1]
    P --> Q[Set starting vertex level to 0]
    Q --> R[Insert starting vertex into queue]
    R --> S{Is queue empty?}
    S -- No --> T[Remove vertex from queue]
    T --> U[Check adjacent vertices]
    U --> V{Unvisited adjacent vertex?}
    V -- Yes --> W[Assign BFS level and insert into queue]
    W --> S
    V -- No --> S
    S -- Yes --> X[Display BFS levels and unreachable vertices]
    X --> Y([Stop])
