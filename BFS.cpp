#include<iostream>
using namespace std;

int visited[20], a[20][20], r = -1, f = 0, q[20], n, v;

void bfs(int v) {
    cout << "BFS Traversal: ";
    cout << v << " ";
    visited[v] = 1;

    while (f <= r) {
        int currentVertex = q[f++];
        for (int i = 1; i <= n; i++) {
            if (a[currentVertex][i] && !visited[i]) {
                cout << i << " ";
                visited[i] = 1;
                q[++r] = i;
            }
        }
    }
    cout << endl;
}

int main() {
    cout << "Enter no of vertices: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        visited[i] = 0;
    }

    cout << "Enter graph data matrix: ";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter starting vertex: ";
    cin >> v;

    // Initialize the queue
    for (int i = 0; i <= n; i++) {
        q[i] = 0;
    }
    q[++r] = v;
    bfs(v);

    return 0;
}

