#include <iostream>
using namespace std;

int graph[20][20], visited[20], n;

void DFS(int v) {
    visited[v] = 1;
    cout << v << " ";

    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main() {
    int edges, u, v, start;

    cout << "Enter number of computers: ";
    cin >> n;

    cout << "Enter number of connections: ";
    cin >> edges;

    cout << "Enter connections (u v):\n";

    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    cout << "Enter starting computer: ";
    cin >> start;

    cout << "DFS Traversal: ";
    DFS(start);

    return 0;
}
