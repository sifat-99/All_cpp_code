#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
ll MOD = 998244353;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve() {
    // Add your solution code here if needed
}

int main() {
    fast_cin();
    int N;
    cin >> N;

    vector<int> firstList(N);
    for (int i = 0; i < N; i++) {
        cin >> firstList[i];
    }

    set<int> weights;
    for (int i = 0; i < N - 2; i++) {
        int weight;
        cin >> weight;
        weights.insert(weight);
    }

    int firstLostWeight = 0, secondLostWeight = 0; // Initialize the variables
    for (int weight : firstList) {
        if (weights.find(weight) == weights.end()) {
            if (firstLostWeight == 0) {
                firstLostWeight = weight;
            } else {
                secondLostWeight = weight;
            }
        }
    }

    cout << max(firstLostWeight, secondLostWeight) << " " << min(firstLostWeight, secondLostWeight) << endl;

    return 0;
}
