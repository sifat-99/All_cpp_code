#include <iostream>
using namespace std;
class MyArray {
public:
    int *arr;
    int size;
    MyArray(int n) {
        size = n;
        arr = new int[size];
    }
    MyArray operator+(MyArray& object) {
        MyArray ob(size);

        for (int i = 0; i < size; i++) {
            ob.arr[i] = arr[i] + object.arr[i];
        }

        return ob;
    }
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int getTotalSum()  {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

void compareTotalSum( MyArray& arr1,  MyArray& arr2) {
    int sum1 = arr1.getTotalSum();
    int sum2 = arr2.getTotalSum();
    cout << "Sum1: " << sum1 << endl;
    cout << "Sum2: " << sum2 << endl;

    if (sum1 < sum2) {
        cout<<"Sum1 is less than Sum2"<<endl;
    } else if (sum1 > sum2) {
        cout<<"Sum1 is greater than Sum2"<<endl;
    } else {
        cout<<"Sum1 is equal to Sum2"<<endl;
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
    for (int i = 0; i < size; i++) {
        cin >> arr1.arr[i];
    }
    cout << "Enter " << size << " elements for the second array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr2.arr[i];
    }

    arr3 = arr1 + arr2;
    cout << "Array 1: ";
    arr1.display();
    cout << "Array 2: ";
    arr2.display();
    // arr3.display();
    compareTotalSum(arr1, arr2);
}