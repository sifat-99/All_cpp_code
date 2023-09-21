#include <iostream>
using namespace std;

int countAmazingPerformances(int n, int points[]) {
    int amazingPerformances = 0;
    int minPoints = points[0];
    int maxPoints = points[0];

    for (int i = 1; i < n; i++) {
        if (points[i] > maxPoints) {
            maxPoints = points[i];
            amazingPerformances++;
        } else if (points[i] < minPoints) {
            minPoints = points[i];
            amazingPerformances++;
        }
    }

    return amazingPerformances;
}

int main() {
    int n;
    cin >> n;
    int points[n];

    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    int result = countAmazingPerformances(n, points);
    cout << result << endl;

    return 0;
}
