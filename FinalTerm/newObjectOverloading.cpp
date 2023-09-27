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
        delete[] arr;
    }

    int getTotalSum()  {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }
};

int compareTotalSum( MyArray& arr1,  MyArray& arr2) {
    int sum1 = arr1.getTotalSum();
    int sum2 = arr2.getTotalSum();

    cout << "Sum1: " << sum1 << endl;
    cout << "Sum2: " << sum2 << endl;

    if (sum1 < sum2) {
        return -1;
    } else if (sum1 > sum2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int size;
    cout << "Enter the Array Size: ";
    cin >> size;
    MyArray arr1(size);
    MyArray arr2(size);
    MyArray arr3(size);
    cout << "Enter " << size << " elements for the first array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr1.arr[i];
    }
    cout << "Enter " << size << " elements for the second array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr2.arr[i];
    }

    cout << "Array 1: ";
    arr1.display();
    cout << "Array 2: ";
    arr2.display();

    int comparison = compareTotalSum(arr1, arr2);
    if (comparison < 0) {
        cout << "Total sum of Array 1 is smaller." << endl;
    } else if (comparison > 0) {
        cout << "Total sum of Array 2 is smaller." << endl;
    } else {
        cout << "Total sums of both arrays are equal." << endl;
    }

    return 0;
}
