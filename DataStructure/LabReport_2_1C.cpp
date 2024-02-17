#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, int &swapCount)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }
    }
}

void selectionSort(int arr[], int n, int &swapCount)
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
        swapCount++;
    }
}
void insertionSort(int arr[], int n, int &swapCount)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        swapCount++;
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {9, 16, 22, 25, 31, 37, 41, 44, 48, 56, 62, 65, 73, 78, 85};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort
    int bubbleSwapCount = 0;
    bubbleSort(arr, n, bubbleSwapCount);
    cout << "Bubble Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Bubble Sort Swap Count: " << bubbleSwapCount << endl;

    // Selection Sort
    int selectionSwapCount = 0;
    selectionSort(arr, n, selectionSwapCount);
    cout << "Selection Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Selection Sort Swap Count: " << selectionSwapCount << endl;

    // Insertion Sort
    int insertionSwapCount = 0;
    insertionSort(arr, n, insertionSwapCount);
    cout << "Insertion Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Insertion Sort Swap Count: " << insertionSwapCount << endl;

    return 0;
}
