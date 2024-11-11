#include <iostream>
#include <vector>

using namespace std;

struct Flowerbed {
    long long Xi;
    long long Yi;
};

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int N;
        long long K;
        cin >> N >> K;

        vector<Flowerbed> flowerbeds(N);
        for (int i = 0; i < N; ++i) {
            cin >> flowerbeds[i].Xi >> flowerbeds[i].Yi;
        }

        long long totalWaterings = 0;
        for (const Flowerbed& flowerbed : flowerbeds) {
            totalWaterings += 1; // Assuming each flowerbed needs one watering
            if (totalWaterings > 4) {
                totalWaterings = 4;
                break;
            }
        }

        cout << "Case " << t << ": " << totalWaterings << endl;
    }
    return 0;
}
