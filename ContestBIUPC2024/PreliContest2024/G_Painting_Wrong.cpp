#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAXN = 200005;

vector<int> adj[MAXN];
int dist_from_a[MAXN], dist_from_b[MAXN];

// Perform BFS to compute distances
void bfs(int start, int dist[], int n) {
    queue<int> q;
    fill(dist, dist + n + 1, -1);
    dist[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (dist[neighbor] == -1) { // Unvisited
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n;
    cin >> n; // Number of nodes

    // Read the edges
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int q;
    cin >> q; // Number of queries

    vector<int> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    // Step 1: Find the farthest node from any node (diameter first endpoint)
    bfs(1, dist_from_a, n);
    int farthest_node = 1;
    for (int i = 2; i <= n; i++) {
        if (dist_from_a[i] > dist_from_a[farthest_node]) {
            farthest_node = i;
        }
    }

    // Step 2: Find the diameter of the tree
    bfs(farthest_node, dist_from_a, n);
    int diameter_node = 1;
    for (int i = 2; i <= n; i++) {
        if (dist_from_a[i] > dist_from_a[diameter_node]) {
            diameter_node = i;
        }
    }

    // Step 3: Compute distances from both ends of the diameter
    bfs(farthest_node, dist_from_a, n);
    bfs(diameter_node, dist_from_b, n);

    // Step 4: Answer each query
    for (int start_node : queries) {
        // Alice starts at start_node
        int alice_dist = dist_from_a[start_node];
        int bob_dist = dist_from_b[start_node];

        if (alice_dist < bob_dist) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
