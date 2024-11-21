#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solveTowerProblem() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;
        vector<int> tower;
        vector<int> discs(n);

        for (int i = 0; i < n; i++) {
            cin >> discs[i];
            auto position = lower_bound(tower.begin(), tower.end(), discs[i]);

            if (position != tower.end()) {
                *position = discs[i];
            } else {
                tower.push_back(discs[i]);
            }
        }

        cout << tower.size() << endl;
    }
}

int main() {
    solveTowerProblem();
    return 0;
}
