#include<bits/stdc++.h>
using namespace std;
int main() {
    const int size = 9; 
    int counts[size] = {0}; 
    while (true) {
        int num;
        cin >> num;
        if (num <= 0) {
            break;
        }
        if (num >= 1 && num <= 9) {
            counts[num - 1]++;
        } else {
            cout << "Invalid input. Please enter a positive integer between 1 and 9." << endl;
        }
    }
    for (int i = 0; i < size; ++i) {
        if (counts[i] > 0) {
            cout<<endl << i + 1 << " >-------->>" << counts[i] <<" Times" << endl;
        }
    }
    return 0;
}
