#include<bits/stdc++.h>
using namespace std;

int findStore(int n, const int* chocolateBars, int goldenTicketCode) {
    int totalBars = 0;
    int storeIndex = 0;

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        totalBars += chocolateBars[mid];

        if (goldenTicketCode <= totalBars) {
            storeIndex = mid;
            break;
        }

        if (totalBars < goldenTicketCode) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return storeIndex;
}

int main() {
    int n; 
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of stores." << endl;
        return 1;
    }

    unique_ptr<int[]> chocolateBars(new int[n]);
    for (int i = 0; i < n; i++) {
        cin >> chocolateBars[i];
    }

    int goldenTicketCode;
    cin >> goldenTicketCode;

    int storeIndex = findStore(n, chocolateBars.get(), goldenTicketCode);
    cout << storeIndex << endl;

    return 0;
}
