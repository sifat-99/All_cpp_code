#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void solve(int X, int Y, int Z) {
    // Calculate the semi-perimeter
    double s = (X + Y + Z) / 2.0;

    // Calculate the area using Heron's formula
    double area = sqrt(s * (s - X) * (s - Y) * (s - Z));

    // Calculate the inradius
    double inradius = area / s;

    // The shortest jump distance is twice the inradius
    double L = 2 * inradius;

    // Calculate L^2
    double L_squared = L * L;

    // Convert L_squared to an irreducible fraction
    int numerator = round(L_squared * 1000000);
    int denominator = 1000000;
    int common_divisor = gcd(numerator, denominator);

    numerator /= common_divisor;
    denominator /= common_divisor;

    cout << numerator << "/" << denominator << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        solve(X, Y, Z);
    }
    return 0;
}
