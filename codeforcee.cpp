// #include <iostream>
// #include <vector>

// using namespace std;

// bool canColorArray(const vector<int> &arr)
// {
//     int n = arr.size();
//     int sum = 0;

//     for (int num : arr)
//     {
//         sum += num;
//     }
//     bool totalSumIsEven = (sum % 2 == 0);
//     if (!totalSumIsEven)
//     {
//         return false;
//     }
//     int sumBlue = 0;
//     int sumRed = 0;
//     for (int num : arr)
//     {
//         if ((sumBlue % 2 == 0 && sumRed % 2 == 0) || (sumBlue % 2 != 0 && sumRed % 2 != 0))
//         {
//             return true;
//         }

//         if (sumBlue % 2 == 0)
//         {
//             sumRed += num;
//         }
//         else
//         {
//             sumBlue += num;
//         }
//     }
//     if ((sumBlue % 2 == 0 && sumRed % 2 == 0) || (sumBlue % 2 != 0 && sumRed % 2 != 0))
//     {
//         return true;
//     }
//     return false;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> arr(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         if (canColorArray(arr))
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }


#include <iostream>
#include <vector>

using namespace std;

void dfs(int u, const vector<vector<int> >& graph, vector<bool>& visited) {
    visited[u] = true;
    for (int v : graph[u]) {
        if (!visited[v]) {
            dfs(v, graph, visited);
        }
    }
}

vector<int> findStrongVertices(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<int> strongVertices;

    for (int i = 0; i < n; ++i) {
        fill(visited.begin(), visited.end(), false);
        dfs(i, graph, visited);
        bool allVisited = true;
        for (bool v : visited) {
            if (!v) {
                allVisited = false;
                break;
            }
        }
        if (allVisited) {
            strongVertices.push_back(i + 1); // Indexing from 1 to n
        }
    }

    return strongVertices;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<vector<int> > graph(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i] - a[j] >= b[i] - b[j]) {
                    graph[i].push_back(j);
                }
            }
        }

        vector<int> strongVertices = findStrongVertices(graph);

        cout << strongVertices.size() << endl;
        for (int v : strongVertices) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
