## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Enter number of computers and connections/]
    B --> C[Create adjacency matrix]
    C --> D[/Enter computer connections/]
    D --> E[Store connections in adjacency matrix]
    E --> F[Initialize visited array to 0]
    F --> G[/Enter starting computer/]
    G --> H[Call DFS starting vertex]
    H --> I[Mark current vertex as visited]
    I --> J[Display current vertex]
    J --> K{Any unvisited adjacent vertex?}
    K -- Yes --> L[Call DFS recursively]
    L --> I
    K -- No --> M{All reachable vertices visited?}
    M -- No --> K
    M -- Yes --> N[Display DFS traversal order]
    N --> O([Stop])
