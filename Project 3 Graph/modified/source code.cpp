#include <iostream>
#include <queue>
using namespace std;

int graph[20][20], visited[20], level[20], n;
int count = 0;

void DFS(int v) {
    visited[v] = 1;
    count++;

    cout << v << " ";

    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

void BFS(int start) {
    queue<int> q;

    for (int i = 0; i < n; i++)
        level[i] = -1;

    q.push(start);
    level[start] = 0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && level[i] == -1) {
                level[i] = level[v] + 1;
                q.push(i);
            }
        }
    }
}

int main() {
    int edges, u, v, start;

    cout << "Enter number of computers: ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Invalid number of computers!";
        return 0;
    }

    cout << "Enter number of connections: ";
    cin >> edges;

    if (edges < 0 || edges > n * (n - 1) / 2) {
        cout << "Invalid number of connections!";
        return 0;
    }

    cout << "Enter connections (u v):\n";

    for (int i = 0; i < edges; i++) {
        cin >> u >> v;

        if (u < 0 || u >= n || v < 0 || v >= n) {
            cout << "Invalid connection!";
            return 0;
        }

        graph[u][v] = graph[v][u] = 1;
    }

    cout << "Enter starting computer: ";
    cin >> start;

    if (start < 0 || start >= n) {
        cout << "Invalid starting computer!";
        return 0;
    }

    // A: DFS traversal
    cout << "\nDFS Traversal: ";
    DFS(start);

    // B: Reachable and unvisited vertices
    cout << "\nReachable vertices: ";
    for (int i = 0; i < n; i++) {
        if (visited[i])
            cout << i << " ";
    }

    cout << "\nUnvisited vertices: ";
    for (int i = 0; i < n; i++) {
        if (!visited[i])
            cout << i << " ";
    }

    // C: Count reachable vertices
    cout << "\nNumber of reachable vertices: " << count;

    // BFS levels
    BFS(start);

    cout << "\n\nComputer\tBFS Level\n";

    for (int i = 0; i < n; i++) {
        cout << i << "\t\t";

        if (level[i] == -1)
            cout << "Unreachable\n";
        else
            cout << level[i] << "\n";
    }

    return 0;
}
