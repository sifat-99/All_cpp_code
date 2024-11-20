#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

typedef pair<int, int> iPair;

struct Graph {
    int V;
    list<iPair>* adj;

    Graph(int V) {
        this->V = V;
        adj = new list<iPair>[V];
    }

    void addEdge(int u, int v, int w);
    void shortestPathInGraph(int src);
};

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void Graph::shortestPathInGraph(int src) {
    priority_queue<iPair, vector<iPair>, greater<iPair> > PriorityQueue;
    vector<int> dist(V, INF);
    PriorityQueue.push(make_pair(0, src));
    dist[src] = 0;
    while (!PriorityQueue.empty()) {
        int u = PriorityQueue.top().second;
        PriorityQueue.pop();
        for (list<iPair>::iterator i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                PriorityQueue.push(make_pair(dist[v], v));
            }
        }
    }
    cout<< "Shortest distance from vertex: "<<src<<endl;
    cout<<"Edges: "<<endl;
    for (int i = 0; i < V; ++i)
        cout << i << ":   " << dist[i] << endl;
}

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    Graph g(V);

    cout << "Enter number of edges: ";
    cin >> E;

    cout << "Enter edges (u v w) :\n";
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    int src =0;

    g.shortestPathInGraph(src);
    return 0;
}
