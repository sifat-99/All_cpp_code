#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter coins number:";
    cin >> n;

    int coins[n];
    cout << "Value of coins:";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    sort(coins, coins + n, greater<int>());
    int totalTaken = 0;
    long long sumTable = 0;

    while (totalTaken < n && sumTable <= coins[totalTaken]) {
        sumTable += coins[totalTaken];
        totalTaken++;
    }
    cout << " Largest total taken:" << totalTaken << endl;
    return 0;
}

