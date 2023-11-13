
#include <iostream>
using namespace std;

class myClass {
public:
    int u;
    int v;

    myClass(int u, int v) : u(u), v(v) {}

    myClass operator--(int) {
        int lastDigit;
        cout<<"Enter the last digit: ";
        cin>>lastDigit;
        myClass temp(u, v);
        u -= lastDigit;
        v -= lastDigit;
        return temp;
    }

    myClass& operator--() {
        int lastDigit;
        cout<<"Enter the last digit: ";
        cin>>lastDigit; 
        u -= lastDigit;
        v -= lastDigit;
        return *this;
    }
};

int main() {
    myClass obj(10, 20);
    cout << "Initial value: u = " << obj.u << ", v = " << obj.v << endl;
    obj--;
    cout << "After post-decrement: u = " << obj.u << ", v = " << obj.v <<endl;
    --obj;
    cout << "After pre-decrement: u = " << obj.u << ", v = " << obj.v <<endl;
    return 0;
}

