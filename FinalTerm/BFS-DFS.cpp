#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

void bfs(vector<vector<int>>& adjList, vector<bool>& visited, int startNode)
{
    queue<int> q; // Create a queue for BFS
    visited[startNode] = true; // Mark the startNode as visited
    q.push(startNode); // Enqueue the startNode

    // Perform BFS
    while (!q.empty())
    {
        int currentNode = q.front(); // Dequeue and print vertex (currentNode) from queue
        q.pop();

        cout << currentNode << " "; // Print the visited node

        // Visit all adjacent vertices of the dequeued vertex
        for (int neighbor : adjList[currentNode])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true; // Mark the unvisited neighbor as visited
                q.push(neighbor); // Enqueue the unvisited neighbor
            }
        }
    }
}

void dfs(vector<vector<int>>& adjList, vector<bool>& visited, int currentNode)
{
    visited[currentNode] = true; // Mark the current node as visited
    cout << currentNode << " "; // Print the visited node

    // Visit all unvisited adjacent vertices of the current node
    for (int neighbor : adjList[currentNode])
    {
        if (!visited[neighbor])
        {
            dfs(adjList, visited, neighbor); // Recursive DFS call for unvisited neighbors
        }
    }
}

int main()
{
    int vertices = 6;                      // Number of vertices
    vector<vector<int>> adjList(vertices); // Adjacency list representation of the graph
    vector<bool> visited(vertices, false); // To keep track of visited nodes

    // Add edges to the graph
    adjList[0] = {1, 3};
    adjList[1] = {0, 2, 4};
    adjList[2] = {1, 5};
    adjList[3] = {0, 4};
    adjList[4] = {1, 3, 5};
    adjList[5] = {2, 4};

    // Perform BFS traversal starting from vertex 0
    cout << "Breadth First Traversal: ";
    bfs(adjList, visited, 0);
    cout << endl;

    // Reset visited vector
    fill(visited.begin(), visited.end(), false);

    // Perform DFS traversal starting from vertex 0
    cout << "Depth First Traversal: ";
    dfs(adjList, visited, 0);
    cout << endl;

    return 0;
}
