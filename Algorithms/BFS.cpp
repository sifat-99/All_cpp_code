#include<iostream>
using namespace std;

#define MAX 100  // Maximum number of vertices in the graph

// Queue data structure
class Queue {
private:
    int arr[MAX];  // Array to hold the elements
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Function to add an element to the queue
    void enqueue(int val) {
        if (rear == MAX - 1) {  // Check for overflow
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;  // Initialize front if it's the first element
        rear++;  // Increment rear to add a new element
        arr[rear] = val;  // Place the new element in the queue
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (front == -1 || front > rear) {  // Check for underflow
            cout << "Queue Underflow!" << endl;
            return -1;  // Return -1 to indicate the queue is empty
        }
        int value = arr[front];  // Get the front element
        front++;  // Move front forward after removing an element
        return value;  // Return the removed element
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);  // Return true if empty
    }
};

// Function to perform BFS
void BFS(int graph[MAX][MAX], int n, int start) {
    bool visited[MAX] = {false};  // Array to keep track of visited nodes
    Queue q;  // Create a queue to help with BFS

    // Start by marking the starting node as visited and enqueue it
    visited[start] = true;
    q.enqueue(start);  // Add the start node to the queue

    cout << "BFS traversal starting from node " << start + 1 << ": ";

    // Continue until the queue is empty
    while (!q.isEmpty()) {
        // Dequeue a node from the queue
        int node = q.dequeue();
        cout << node + 1 << " ";  // Print the current node (adjusted for 1-based index)

        // Check all the neighbors of the dequeued node
        for (int i = 0; i < n; i++) {
            // If the node is connected (i.e., there's an edge) and hasn't been visited yet
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;  // Mark this neighbor as visited
                q.enqueue(i);  // Enqueue the neighbor for future exploration
            }
        }
    }

    cout << endl;  // Print a newline at the end of the traversal
}

int main() {
    int n, m;

    // Input: number of nodes in the graph
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Adjacency matrix to represent the graph
    int graph[MAX][MAX] = {0};  // Initialize all values to 0

    // Input: number of edges in the graph
    cout << "Enter the number of edges: ";
    cin >> m;

    // Input edges (src and dest)
    cout << "Enter the edges in the format 'src dest': " << endl;
    for (int i = 0; i < m; i++) {
        int src, dest;
        cin >> src >> dest;
        // Add edge to the adjacency matrix (adjusted for 0-based index)
        graph[src-1][dest-1] = 1;
        graph[dest-1][src-1] = 1;  // If the graph is undirected, add reverse edge
    }

    // Display the adjacency matrix
    cout << "\nAdjacency Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    // Input: starting node for BFS
    int start;
    cout << "Enter the start node for BFS: ";
    cin >> start;

    // Perform BFS from the start node (adjusted for 0-based index)
    BFS(graph, n, start - 1);

    return 0;
}
