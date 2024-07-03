#include <iostream>
#include <vector>

using namespace std;

vector<int> tree;
vector<int> prefixSum;

void buildPrefixSum(int node, int sum) {
  if (node >= tree.size()) {
    return;
  }
  
  prefixSum[node] = sum + tree[node];
  buildPrefixSum(2 * node, prefixSum[node]);
  buildPrefixSum(2 * node + 1, prefixSum[node]);
}

int query(int u, int v) {
  int sum = 0;
  
  while (u != v) {
    if (u > v) {
      swap(u, v);
    }
    
    sum += tree[v];
    v /= 2;
  }
  
  return sum + tree[u];
}

int main() {
  int n;
  cin >> n;
  
  tree.resize(n + 1);
  prefixSum.resize(n + 1);
  
  for (int i = 1; i <= n; i++) {
    cin >> tree[i];
  }
  
  buildPrefixSum(1, 0);
  
  int q;
  cin >> q;
  
  while (q--) {
    int u, v;
    cin >> u >> v;
    
    int result = query(u, v);
    cout << result << endl;
  }
  
  return 0;
}