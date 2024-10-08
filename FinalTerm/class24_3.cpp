#include <iostream>

using namespace std;

class MyArray {
private:

public:
    int *arr;
    int size;
    MyArray(int n) {
        size = n;
        arr = new int[size];
    }
    MyArray operator+(const MyArray& other) {
        MyArray result(size);

        for (int i = 0; i < size; ++i) {
            result.arr[i] = arr[i] + other.arr[i];
        }

        return result;
    }
    MyArray& operator+=(const MyArray& other) {
        for (int i = 0; i < size; ++i) {
            arr[i] += other.arr[i];
        }

        return *this;
    }
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~MyArray() {
    }
};

int main() {
    int size;
    cout<<"Enter the Array Size: ";
    cin>>size;;
    MyArray arr1(size);
    MyArray arr2(size);
    MyArray arr3(size);
    cout << "Enter Second "<<size<<" elements for first array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr1.arr[i];
    }
    cout << "Enter Second "<<size<<" elements for second array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr2.arr[i];
    }

    cout << "Array 1: ";
    arr1.display();
    cout << "Array 2: ";
    arr2.display();
    MyArray sum = arr1 + arr2;
    cout << "Sum of Arrays: ";
    sum.display();
    arr3 = arr1+ arr2;

    return 0;
}
