#include <iostream>
using namespace std;
class MyArray
{
public:
    int *arr;
    int size;
    MyArray(int n)
    {
        size = n;
        arr = new int[size];
    }
    MyArray operator+(MyArray &other)
    {
        MyArray result(size);
        for (int i = 0; i < size; i++)
        {
            result.arr[i] = arr[i] + other.arr[i];
        }
        return result;
    }
    bool operator>(MyArray &other)
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < size; i++)
        {
            sum1 += arr[i];
            sum2 += other.arr[i];
        }
        cout << "Sum of array 1: " << sum1 << endl
             << "Sum of array 2: " << sum2 << endl;
        return sum1 > sum2;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int size;
    cout << "Enter the Array Size: ";
    cin >> size;
    MyArray arr1(size);
    MyArray arr2(size);
    cout << "Enter " << size << " elements for the first array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr1.arr[i];
    }
    cout << "Enter " << size << " elements for the second array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr2.arr[i];
    }
    MyArray arr3 = arr1 + arr2;
    cout << "Array 1: ";
    arr1.display();
    cout << "Array 2: ";
    arr2.display();
    cout << "Array 3 (Result of addition): ";
    arr3.display();
    if (arr1 > arr2)
    {
        cout << "Sum of Array 1 is greater than Sum of Array 2" << endl;
    }
    else
    {
        cout << "Sum of Array 1 is less to Sum of Array 2" << endl;
    }
    return 0;
}
